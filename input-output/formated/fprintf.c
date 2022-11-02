#include <stdio.h>

struct person
{
    char name[20];
    int age;
};

int main(void)
{
    char * filename = "users.txt";
    struct person people[] = { "Tom", 23, "Alice", 27, "Bob", 31, "Kate", 29 };
    int n = sizeof(people)/sizeof(people[0]);
    FILE *fp;
    if ((fp = fopen(filename, "w")) == NULL)
    {
        perror("Error occured while opening file");
        return 1;
    }

    for(int i=0; i<n; i++)
    {
        fprintf(fp, "%s     %d\n", people[i].name, people[i].age);
    }
    fclose(fp);
    return 0;
}