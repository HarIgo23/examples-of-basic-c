#include <stdio.h>

struct person
{
    int age;
    char *name;
};

int main(void)
{
    struct person people[] = {23, "Tom", 32, "Bob", 26, "Alice", 41, "Sam"};
    int n = sizeof(people)/sizeof(people[0]);

    for(int i=0; i<n; i++)
    {
        printf("Age: %d \t Name: %s\n", people[i].age, people[i].name);
    }

    return 0;
}
