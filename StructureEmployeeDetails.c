#include<stdio.h>

struct Employee {
    int employeeID;
    float salary;
    char name[50];
};

int main() {
    int n, i;
    printf("Enter the number of employees:\n");
    scanf("%d", &n);
    struct Employee employees[n];
    for(i = 0; i < n; i++) {
        printf("Enter the Employee ID of employee %d:\n", i + 1);
        scanf("%d", &employees[i].employeeID);
        printf("Enter the Salary of employee %d:\n", i + 1);
        scanf("%f", &employees[i].salary);
        printf("Enter the Name of employee %d:\n", i + 1);
        scanf(" %[^\n]s", employees[i].name);
    }

    printf("Employee Details:\n");
    for(i = 0; i < n; i++) {
        printf("Employee ID: %d, Salary: %.2f, Name: %s\n", employees[i].employeeID, employees[i].salary, employees[i].name);
    }
    return 0;
}
