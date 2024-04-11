#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    while ((str[i] = getchar()) != '\n' && i < 100 - 1) {
        i++;
    }
    str[i] = '\0';
    int len = strlen(str);

    char result[20];
    int palindrome = 1;
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome) {
        strcpy(result, "is");
    } else {
        strcpy(result, "is not");
    }

    printf("The string \"%s\" %s a palindrome.\n", str, result);

    return 0;
}
