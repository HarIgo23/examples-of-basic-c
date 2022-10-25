#include <stdio.h>

int main(void)
{
    char hello1[] = "Hello World"; // строка как массив char
    char *hello2 = "Hello World"; // указатель на тип char

    // массив указателей char представляет собой набор строк
    char *fruit[] = {"apricot", "apple", "banana", "lemon", "pear", "plum"};

    int n = sizeof(fruit)/sizeof(fruit[0]);
//    printf("%lu, %lu, %lu\n\n", sizeof(fruit), sizeof(fruit[0]), sizeof(fruit)/sizeof(fruit[0]));
//    printf("%lu, %lu, %lu\n\n", sizeof(fruit[0]), sizeof(fruit[1]), sizeof(fruit[2]));

    for (int i=0; i<n; i++)
    {
        printf("%s \n", fruit[i]);
    }
    printf("\n");

    // alternative for
//    printf("%p-%s\n", fruit, *fruit);
//    printf("%p-%s\n", &fruit[0], fruit[0]);
    char **ptr = fruit;
    char **last = ptr + n - 1;
//    printf("%p\n", ptr);
//    printf("%p\n", last);
//    printf("%p\n", ptr + 5);
    for(;ptr <= last; ptr++)
    {
        printf("%s\n", *ptr);
    }

    return 0;
}
