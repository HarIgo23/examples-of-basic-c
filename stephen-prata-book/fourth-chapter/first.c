#include <stdio.h>

int main(void)
{
    char name[20], surname[20];
    printf("Enter your fullname use space: ");
    scanf("%s%s", name, surname);
    printf("Guten morgen, %s %s\n", name, surname);

    return 0;
}
