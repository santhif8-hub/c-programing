#include <stdio.h>

void main() {
    unsigned long amount = 1000, deposit, withdraw;
    int pin = 0, choice, k = 1;
    char transaction = 'y';

    // PIN Authentication (Default PIN: 1520)
    while (pin != 1520) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &pin);
        if (pin != 1520) {
            printf("Invalid PIN. Please try again.\n");
        }
    }

    do {
        printf("\n******** Welcome to ATM Service ********\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Deposit Cash\n");
        printf("4. Quit\n");
        printf("****************************************\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nYour current balance is: Rs. %lu\n", amount);
                break;

            case 2:
                printf("\nEnter the amount to withdraw: ");
                scanf("%lu", &withdraw);
                if (withdraw % 100 != 0) {
                    printf("Please enter the amount in multiples of 100.\n");
                } else if (withdraw > (amount - 500)) {
                    printf("Insufficient balance! (Minimum Rs. 500 reserve required)\n");
                } else {
                    amount -= withdraw;
                    printf("Please collect your cash. Remaining balance: Rs. %lu\n", amount);
                }
                break;

            case 3:
                printf("\nEnter the amount to deposit: ");
                scanf("%lu", &deposit);
                amount += deposit;
                printf("Your deposit is successful. Current balance: Rs. %lu\n", amount);
                break;

            case 4:
                printf("\nThank you for using the ATM. Goodbye!\n");
                k = 0;
                break;

            default:
                printf("\nInvalid choice. Please select a valid option (1-4).\n");
        }

        if (choice != 4) {
            printf("\nWould you like to perform another transaction? (y/n): ");
            scanf(" %c", &transaction);
            if (transaction == 'n' || transaction == 'N') {
                k = 0;
            }
        }
    } while (k == 1);
}
