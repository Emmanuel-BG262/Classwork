//Tutorial No.:6
//Emmanuel Binoy George
//Roll no.: 30

//Question 1: To check wheather the entered character is a vowel or not

/*#include <stdio.h>
int main()
{
    char vowel;
    printf("Enter a character: ");
    scanf("%c",&vowel);
    switch (vowel){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("\nVowel.");
        break;
        default :printf("\nConsonant.");
    }
    return 0;
}*/

//Qustion 2: Display number of days in a month
/*#include <stdio.h>

int main()
{
    int month;
    printf("Enter the month(1...12): ");
    scanf("%d",&month);
    switch (month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("\n31 Days.");
        break;
        case  4:
        case 6:
        case 9:
        case 11:
        printf("\n30 Days.");
        break;
        case 2:
        printf("\n28 Days.");
        break;
        default :printf("\nInvalid number inputted.");
    }
    return 0;
}*/

//Question 3: Convert temperature between Celsius & Fahrenheit

#include <stdio.h>
int main()
{
    int choice;
    float fahrenheit,celsius;
    printf("\n1---> convert Celsuis to Fahrenheit\n2---> convert Fahrenheit to Celsius\nEnter a choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:           
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9 / 5) + 32;
            printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
        break;
    case 2:       
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            celsius = (fahrenheit - 32) * 5 / 9;
            printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);
        break;
    
    default:
        printf("Wrong value has been entered");
        break;
    }

    return 0;
}