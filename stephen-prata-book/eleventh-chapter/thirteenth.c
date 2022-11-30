#include <stdio.h>

int main(int argc, char *argv[])
{
    int count;
    printf("Количество аргументов, указанных в командной строке: %d\n", argc - 1);
    for (count = argc - 1; count > 0; count--)
        printf("%d: %s\n", argc - count, argv[count]);
    printf ("\n");
    return 0;
}
