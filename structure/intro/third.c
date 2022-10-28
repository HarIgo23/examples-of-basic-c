#include <stdio.h>

struct person
{
    int age;
    char * name;
} tom, bob, alice;

int main(void)
{
    tom.name ="Tom";
    tom.age = 23;
    bob.name ="Bob";
    bob.age = 15;
    alice.name = "Alice";
    alice.age=25;
    printf("Name:%s \t Age: %d\n", tom.name, tom.age);
    printf("Name:%s \t Age: %d\n", bob.name, bob.age);
    printf("Name:%s \t Age: %d\n", alice.name, alice.age);
    return 0;
}