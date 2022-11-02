#include <stdio.h>
#include <stdlib.h>

struct person
{
    char name[16];
    int age;
};

int save(char *filename, struct person *p, int n);
int load(char *filename);

int main(void)
{
    char *filename = "people.dat";
    struct person people[] = { "Tom", 21, "Alice", 27, "Bob", 31, "Kate", 29};
    int n = sizeof(people)/sizeof(struct person);

    save(filename, people, n);
    load(filename);

    return 0;
}

int save(char *filename, struct person *p, int n)
{
    FILE *fp;
    char *c;

    // число записываемых байтов
    int size = n * sizeof(struct person);

    if((fp=fopen(filename, "wb")) == NULL)
    {
        perror("Error occured while opening file");
        return 1;
    }

    // записываем количество структур
    c = (char *)&n;
    for (int i = 0; i<sizeof(int); i++)
    {
        putc(*c++, fp);
    }

    // посимвольно записываем в файл все структуры
    c = (char *)p;
    for (; c < (char *)p+size; c++)
    {
        putc(*c, fp);
    }

    fclose(fp);
    return 0;
}

int load(char *filename)
{

    FILE *fp;
    char *c;
    int i, n;

    if((fp=fopen(filename, "rb")) == NULL)
    {
        perror("Error occured while opening file");
        return 1;
    }

    c = (char *)&n;
    for (int i=0; i<sizeof(int); i++)
    {
        *c = (char)getc(fp);
        c++;
    }

    // выделяем память для считываемой структуры
    int size = n * sizeof(struct person); // количество считываемых байтов
    struct person * ptr = (struct person *)malloc(size);

    // устанавливаем указатель на начало блока выделенной памяти
    c = (char *)ptr;

    // считываем посимвольно из файла
    while ((i = getc(fp)) != EOF)
    {
        *c = (char)i;
        c++;
    }

    fclose(fp);

    printf("\n%d people was stored in the file\n\n", n);
    // вывод на консоль загруженной структуры
    for (int k = 0; k<n; k++)
    {
        printf("%-5d %-20s %5d \n", k + 1, (ptr + k)->name, (ptr + k)->age);
    }

    free(ptr);
    return 0;
}
