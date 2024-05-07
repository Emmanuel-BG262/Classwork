#include <stdio.h>

// Function prototypes
void addTwoNumbers(int *a, int *b, int *result);
void swapTwoNumbers(int *a, int *b);

int main() {
    int choice;
    int num1, num2;
    int result;

    do {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Add two numbers\n");
        printf("2. Swap two numbers\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Adding two numbers
                printf("Enter two numbers to add: ");
                scanf("%d %d", &num1, &num2);
                addTwoNumbers(&num1, &num2, &result);
                printf("The sum of %d and %d is %d\n", num1, num2, result);
                break;

            case 2:
                // Swapping two numbers
                printf("Enter two numbers to swap: ");
                scanf("%d %d", &num1, &num2);
                printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
                swapTwoNumbers(&num1, &num2);
                printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
                break;

            case 3:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

    } while (choice != 3);

    return 0;
}

// Function to add two numbers
void addTwoNumbers(int *a, int *b, int *result) {
    *result = *a + *b;
}

// Function to swap two numbers
void swapTwoNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
