#include <stdio.h>
#include <stdlib.h>

struct person
{
    char name[16];
    int age;
};

int save(char *filename, struct person *p);
int load(char *filename);

int main(void)
{
    char *filename = "person.dat";
    struct person tom = { "Tom", 21 };

    save(filename, &tom);
    load(filename);

    return 0;
}

int save(char *filename, struct person *p)
{
    FILE *fp;
    char *c;
    int size = sizeof(struct person);

    if((fp=fopen(filename, "wb")) == NULL)
    {
        perror("Error occured while opening file");
        return 1;
    }

    // устанавливаем указатель на начало структуры
    c = (char *)p;

    for (; c < (char *)p+size; c++)
    {
        putc(*c, fp);
    }
//    for (int i = 0; i < size; i++)
//    {
//        putc(*c++, fp);
//    }

    fclose(fp);
    return 0;
}

int load(char *filename)
{

    FILE *fp;
    char *c;
    int i; // для считывания одного символа
    int size = sizeof(struct person); // количество считываемых байтов

    // выделяем память для считываемой структуры
    struct person * ptr = (struct person *)malloc(size);

    if((fp=fopen(filename, "rb")) == NULL)
    {
        perror("Error occured while opening file");
        return 1;
    }

    // устанавливаем указатель на начало блока выделенной памяти
    c = (char *)ptr;

    // считываем посимвольно из файла
    while ((i = getc(fp)) != EOF)
    {
        *c = (char)i;
        c++;
    }

    fclose(fp);
    // вывод на консоль загруженной структуры
    printf("Person: %-20s %5d \n", ptr->name, ptr->age);

    free(ptr);
    return 0;
}
