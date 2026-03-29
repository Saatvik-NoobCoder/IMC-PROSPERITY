from flask import Flask, request, jsonify, render_template
import joblib
from scipy.sparse import hstack

# -----------------------------
# Step 1: Load trained binary SLM model & vectorizers
# -----------------------------
clf = joblib.load("/Users/saatvikdutta/Desktop/VS CODE/HACKATHON/food_binary_slm.pkl")
vectorizers = joblib.load("/Users/saatvikdutta/Desktop/VS CODE/HACKATHON/vectorizers_binary.pkl")
# Full list of foods
food_items = ["Rice", "Oats", "Apple", "Banana", "Spinach", "Broccoli",
              "Chicken", "Fish", "Lentils", "Milk", "Yogurt", "Cheese",
              "Chocolate", "Peanuts", "Eggs", "Tomatoes", "Potatoes", "Bread",
              "Grapefruit", "Tofu", "Almonds", "Berries", "Carrots", "Beans",
              "Salmon", "Avocado", "Sweet Potato", "Cucumber", "Mango",
              "Pasta", "Quinoa", "Orange", "Peas", "Cabbage", "Pumpkin"]

app = Flask(__name__)

# -----------------------------
# Step 2: Home page
# -----------------------------
@app.route('/')
def home():
    return render_template('index.html')  # Your UI HTML

# -----------------------------
# Step 3: Predict route
# -----------------------------
@app.route('/predict', methods=['POST'])
def predict():
    data == request.json

    # Normalize inputs
    user_present = ','.join([x.strip().lower() for x in data.get('present', '').split(',')])
    user_past    = ','.join([x.strip().lower() for x in data.get('past', '').split(',')])
    user_med     = ','.join([x.strip().lower() for x in data.get('med', '').split(',')])
    user_allergy = ','.join([x.strip().lower() for x in data.get('allergy', '').split(',')])

    good_foods = []
    bad_foods = []

    for food in food_items:
        row = {
            "Present Diseases": user_present,
            "Past Diseases": user_past,
            "Medication": user_med,
            "Allergies": user_allergy,
            "Food Item": food
        }
        X_row = [vectorizers[col].transform([row[col]]) for col in vectorizers]
        X_row_final = hstack(X_row)
        pred = clf.predict(X_row_final)

        if pred[0] == 1:
            good_foods.append(food)
        else:
            bad_foods.append(food)

    return jsonify({"good_foods": good_foods, "bad_foods": bad_foods})

# -----------------------------
# Step 4: Run server
# -----------------------------
if __name__ == "__main__":
    app.run(debug=True)