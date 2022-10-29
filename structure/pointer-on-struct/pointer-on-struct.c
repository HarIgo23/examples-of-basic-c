#include <stdio.h>

struct person
{
    int age;
    char *name;
};

int main(void)
{
    struct person kate = {31, "Kate"};
    struct person *p_kate = &kate;
    char *name = p_kate->name;
    int age = (*p_kate).age;
    printf("Age: %d \t Name: %s\n", age, name);
    p_kate->age = 32;
    printf("Age: %d \t Name: %s\n", kate.age, kate.name);
    return 0;
}
