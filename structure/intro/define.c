#include <stdio.h>


#define PERSON struct {int age;char * name;}

int main(void)
{
    PERSON tom = {23, "Tom"};
    printf("Name:%s \t Age: %d\n", tom.name, tom.age);
    return 0;
}