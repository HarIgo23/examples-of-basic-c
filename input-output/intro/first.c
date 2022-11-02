#include <stdio.h>

int main(void)
{
    FILE * fp = fopen("data.txt", "w");
    fclose(fp);
    return 0;
}