#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);

    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    int n = (int)strlen(name);
    printf("\"%*s\"\n", n + 3, name);


    return 0;
}
