#include <stdio.h>

struct person
{
    char name[20];
    int age;
};

int main(void)
{
    char * filename = "users.txt";
    FILE *fp;
    char name[20];
    int age;
    if ((fp = fopen(filename, "r")) == NULL)
    {
        perror("Error occured while opening file");
        return 1;
    }

    while((fscanf(fp, "%s   %d\n", name, &age))!=EOF)
    {
        printf("Person: %s-%d\n", name, age);
    }
    fclose(fp);
    return 0;
}