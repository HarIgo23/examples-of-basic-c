#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE * fp;

    if ((fp=fopen("data123.txt", "r")) == NULL)
    {
        perror("Error occurred while opening data123.txt");
        exit(0);
    }

    fclose(fp);
    return 0;
}