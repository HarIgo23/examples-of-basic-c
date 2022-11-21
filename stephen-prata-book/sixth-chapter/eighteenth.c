#include <stdio.h>

#define START_CONNECTION 5
#define DUNBARS_NUMBER 150

int main(void)
{
    int connection_number = START_CONNECTION;
    int counter = 1;
    while (connection_number <= DUNBARS_NUMBER)
    {
        connection_number -= counter;
        connection_number *= 2;
        printf("%d\n", connection_number);
        counter++;
    }
    printf("After %d week(s)\n", counter - 1);

    return 0;
}
