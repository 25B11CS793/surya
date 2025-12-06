#include <stdio.h>

int main() {
    int units;
    float amount, total_amount;

    scanf("%d", &units);

    // Calculate base amount based on slabs
    if (units <= 199) {
        amount = units * 1.20;
    } else if (units >= 200 && units < 400) {
        amount = units * 1.50;
    } else if (units >= 400 && units < 600) {
        amount = units * 1.80;
    } else {
        amount = units * 2.00;
    }

    // Apply surcharge rules
    if (amount > 400) {
        total_amount = amount + (amount * 0.15);  // 15% surcharge
    } else {
        total_amount = amount + 100;              // minimum surcharge Rs. 100
    }

    printf("%.2f
", total_amount);

    return 0;
}
