#include <stdio.h>

void dispenseBills(int amount) {
    int fiftyCount = 0, twentyCount = 0, tenCount = 0;

    if (amount % 10 != 0) {
        printf("Amount must be a multiple of 10.\n");
        return;
    }

    fiftyCount = amount / 50;
    amount %= 50;

    twentyCount = amount / 20;
    amount %= 20;

    tenCount = amount / 10;

    printf("50s: %d, 20s: %d, 10s: %d\n", fiftyCount, twentyCount, tenCount);
}

int main() {
    int amount;

    printf("Enter the amount to dispense (multiple of 10): ");
    scanf("%d", &amount);

    dispenseBills(amount);

    return 0;
}