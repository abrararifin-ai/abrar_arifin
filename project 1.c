#include <stdio.h>

int main() {
    int choice;
    float balance = 5000, amount;

    printf("=== Simple ATM System ===\n");

    while (1) {
        printf("\n1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Balance: %.2f Tk\n", balance);
                break;

            case 2:
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Deposit Successful!\n");
                break;

            case 3:
                printf("Enter Withdraw Amount: ");
                scanf("%f", &amount);
                if (amount <= balance) {
                    balance -= amount;
                    printf("Withdraw Successful!\n");
                } else {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 4:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}
