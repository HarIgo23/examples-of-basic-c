#include <stdio.h>

struct person
{
    int age;
    char *name;
};

int main(void)
{
    struct person tom = {23, "Tom"};
    printf("Age: %d \t Name: %s\n", tom.age, tom.name);
    return 0;
}
