#include <stdio.h>

struct person
{
    int age;
    char name[20];
};

int main(void)
{
    struct person p;
    printf("Enter age: ");
    scanf("%d", &p.age);
    printf("Enter name: ");
    scanf("%s", p.name);
    printf("Age: %d \t Name: %s\n", p.age, p.name);
    return 0;
}
