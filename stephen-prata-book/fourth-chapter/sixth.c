#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[20], surname[20];
    printf("Enter your fullname use space: ");
    scanf("%s%s", name, surname);
    unsigned long len_name = strlen(name), len_surname = strlen(surname);

    printf("%s %s\n", name, surname);
    printf("%*lu %*lu\n\n", (int)len_name, len_name, (int)len_surname, len_surname);

    printf("%s %s\n", name, surname);
    printf("%-*lu %-*lu\n", (int)len_name, len_name, (int)len_surname, len_surname);

    return 0;
}
