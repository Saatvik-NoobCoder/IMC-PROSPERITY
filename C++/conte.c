#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);

    if (a == b) {
        printf("0\n");
        return 0;
    }

    long long big = a > b ? a : b;
    long long small = a > b ? b : a;

    if (big % small != 0) {
        printf("-1\n");
        return 0;
    }

    long long ratio = big / small;
    int countPower = 0;
    while (ratio % 2 == 0) {
        ratio /= 2;
        countPower++;
    }

    if (ratio != 1) {
        printf("-1\n");
        return 0;
    }
    int operations = countPower / 3;
    if (countPower % 3 != 0)
        operations++;

    printf("%d\n", operations);

    return 0;
}