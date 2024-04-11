#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, spaces = 0;

    printf("Enter a string (end with $): ");
    fgets(str, 100, stdin);
    if (str[strlen(str) - 1] == '\n') 
    {
        str[strlen(str) - 1] = '\0';
    }

    for (int i = 0; str[i] != '$' && str[i] != '\0'; i++) 
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
        {
            char lowercase = (str[i] >= 'A' && str[i] <= 'Z') ? str[i] + 32 : str[i];
            if (lowercase == 'a' || lowercase == 'e' || lowercase == 'i' || lowercase == 'o' || lowercase == 'u') 
            {
                vowels++;
            } else 
            {
                consonants++;
            }
        } else if (str[i] == ' ') 
        {
            spaces++;
        }
    }

    printf("String entered: %s\n", str);
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    printf("Number of spaces: %d\n", spaces);

    return 0;
}
