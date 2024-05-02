#include <stdio.h>


void addNumbers(int *num1, int *num2) {
    printf("Enter first number: ");
    scanf("%d", num1);
    printf("Enter second number: ");
    scanf("%d", num2);
    printf("Sum: %d\n", *num1 + *num2);
}


void swapNumbers(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    printf("After swapping:\n");
    printf("First number: %d\n", *num1);
    printf("Second number: %d\n", *num2);
}

int main() {
    int choice;
    int num1, num2;

    do {
        printf("\nMenu:\n");
        printf("1. Add two numbers\n");
        printf("2. Swap two numbers\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addNumbers(&num1, &num2);
                break;
            case 2:
                printf("Enter first number: ");
                scanf("%d", &num1);
                printf("Enter second number: ");
                scanf("%d", &num2);
                swapNumbers(&num1, &num2);
                break;
            case 3:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 3);

    return 0;
}
