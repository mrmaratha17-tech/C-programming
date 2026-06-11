#include <stdio.h>

int main() {
    int balance = 10000, amount;

    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);

    if (amount <= balance) {
        balance -= amount;
        printf("Withdrawal Successful\n");
        printf("Remaining Balance = %d", balance);
    } else {
        printf("Insufficient Balance");
    }

    return 0;
}
