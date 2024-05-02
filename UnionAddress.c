#include <stdio.h>
#include <string.h>

#define C_SIZE 50

union Address {
    char Name[C_SIZE];
    char HouseName[C_SIZE];
    char CityName[C_SIZE];
    char State[C_SIZE];
    char PinCode[C_SIZE];
};

int main() {
    union Address person;

    printf("Enter name: ");
    fgets(person.Name, C_SIZE, stdin);
    person.Name[strcspn(person.Name, "\n")] = '\0'; 

    printf("Enter house name: ");
    fgets(person.HouseName, C_SIZE, stdin);
    person.HouseName[strcspn(person.HouseName, "\n")] = '\0';

    printf("Enter city name: ");
    fgets(person.CityName, C_SIZE, stdin);
    person.CityName[strcspn(person.CityName, "\n")] = '\0';

    printf("Enter state: ");
    fgets(person.State, C_SIZE, stdin);
    person.State[strcspn(person.State, "\n")] = '\0';
    printf("Enter pin code: ");
    fgets(person.PinCode, C_SIZE, stdin);
    person.PinCode[strcspn(person.PinCode, "\n")] = '\0';

  
    printf("\nAddress:\n");
    printf("Name: %s\n", person.Name);
    printf("House Name: %s\n", person.HouseName);
    printf("City Name: %s\n", person.CityName);
    printf("State: %s\n", person.State);
    printf("Pin Code: %s\n", person.PinCode);

    return 0;
}
