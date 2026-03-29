from datamodel import OrderDepth, TradingState, Order
from typing import List, Dict
from collections import deque
import numpy as np

class Trader:

    def __init__(self):
        self.history = deque(maxlen=20)

    def run(self, state: TradingState):
        result: Dict[str, List[Order]] = {}

        for product in state.order_depths:
            order_depth: OrderDepth = state.order_depths[product]
            orders: List[Order] = []
            pos = state.position.get(product, 0)

            best_ask = min(order_depth.sell_orders) if order_depth.sell_orders else None
            best_bid = max(order_depth.buy_orders) if order_depth.buy_orders else None

            #EMERALDS
            if product == "EMERALDS":
                max_pos = 80
                slow_start = 60
                pos = state.position.get(product, 0)

                abs_pos = abs(pos)

                if abs_pos < slow_start:
                    size_factor = 1.0
                else:
                    size_factor = (max_pos - abs_pos) / (max_pos - slow_start)

                base_size = 4
                size = max(1, int(base_size * size_factor))
                buy_price = best_bid + 1 if best_bid is not None else None
                sell_price = best_ask - 1 if best_ask is not None else None

                fair_price = 10000

                if buy_price is not None and buy_price < fair_price and pos < max_pos:
                    orders.append(Order(product, buy_price, size))

                if sell_price is not None and sell_price > fair_price and pos > -max_pos:
                    orders.append(Order(product, sell_price, -size))

            # TOMATOES
            if product == "TOMATOES":
                if best_ask is not None and best_bid is not None:

                    mid_price = (best_ask + best_bid) / 2
                    self.history.append(mid_price)

                    if len(self.history) == 20:
                        prices = list(self.history)

                        mean = np.mean(prices)
                        std = np.std(prices)

                        if std > 0:
                            z = (mid_price - mean) / std

                            max_pos = 80
                            pos = state.position.get(product, 0)

                            fair_price = mean - 0.12 * pos

                            if z < -1.2:
                                for ask_price, ask_volume in sorted(order_depth.sell_orders.items()):
                                    if abs(ask_price - mid_price) > 2:
                                        break

                                    if ask_price < fair_price and pos < max_pos:
                                        buy_qty = min(-ask_volume, max_pos - pos)
                                        if buy_qty > 0:
                                            orders.append(Order(product, ask_price, buy_qty))
                                            pos += buy_qty

               
                            elif z > 1.2:
                                for bid_price, bid_volume in sorted(order_depth.buy_orders.items(), reverse=True):
                                    if abs(bid_price - mid_price) > 2:
                                        break

                                    if bid_price > fair_price and pos > -max_pos:
                                        sell_qty = min(bid_volume, pos + max_pos)
                                        if sell_qty > 0:
                                            orders.append(Order(product, bid_price, -sell_qty))
                                            pos -= sell_qty

                        
                            spread = best_ask - best_bid

                            if spread >= 2:
                                buy_price = best_bid + 1
                                sell_price = best_ask - 1

                                base_size = max(1, int(5 - abs(pos) / 20))

                                if pos < max_pos:
                                    orders.append(Order(product, buy_price, base_size))

                                if pos > -max_pos:
                                    orders.append(Order(product, sell_price, -base_size))
            result[product] = orders   

        traderData = "OK"
        conversions = 0

        return result, conversions, traderData