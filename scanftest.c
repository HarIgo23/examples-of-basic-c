#include <stdio.h>

int main(void)
{
    // first example
//    int age;
//    printf("Input your age: ");
//    scanf("%d", &age);
//    printf("Your age is %d\n", age);
    // second example
//    int age; char name[11];
//    printf("Input your age: "); scanf("%d", &age);
//    printf("Input your name: "); scanf("%10s", name);
//    printf("Name = %s, age = %d\n", name, age);
    // third example
//    int day, month, year;
//    printf("Enter date(dd/mm/yyyy): ");
//    scanf("%d%*c%d%*c%d", &day, &month, &year);
//    printf("Your date is %4d-%02d-%02d", year, month, day);
    // fourth example
    char username[21];
    printf("Input your username: ");
    scanf("%20[A-Za-z]", username);
    printf("Your username is %s\n", username);
    return 0;
}
