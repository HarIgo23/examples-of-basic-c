#include <stdio.h>
#include <stdlib.h>

struct person
{
    char name[20];
    int age;
};

int save(char * filename, struct person *st, int n);
int load(char * filename);

int main(void)
{
    char * filename = "people.dat";
    struct person people[] = { "Tom", 23, "Alice", 27, "Bob", 31, "Kate", 29 };
    int n = sizeof(people) / sizeof(people[0]);

    save(filename, people, n);
    load(filename);

    return 0;
}

// запись в файл массива структур
int save(char * filename, struct person * st, int n)
{
    FILE * fp;
    char *c;

    // число записываемых байтов
    int size = n * sizeof(struct person);

    if ((fp = fopen(filename, "wb")) == NULL)
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
    c = (char *)st;
    for (int i = 0; i < size; i++)
    {
        putc(*c, fp);
        c++;
    }
    fclose(fp);
    return 0;
}

// загрузка из файла массива структур
int load(char * filename)
{
    FILE * fp;
    char *c;
    int n = sizeof(struct person);

    // считываем структуру по определенному индексу из файла:
    int i;
    // ввод номера структуры
    printf("Input user number: ");
    scanf("%d", &i);

    // получаем, на сколько байтов надо перемотать указатель относительно начала позиции
    int pos = (i-1) * n + 4;

    if ((fp = fopen(filename, "rb")) == NULL)
    {
        perror("Error occured while opening file");
        return 1;
    }

    // перемещаем указатель на нужную позицию
    fseek(fp, pos, SEEK_SET);

    // выделяем память для считываемой структуры
    struct person * ptr = (struct person *) malloc(sizeof(struct person));
    c = (char *)ptr;
    // после записи считываем посимвольно из файла
    while(n>0)
    {
        i= getc(fp);
        if(i==EOF) break;
        *c = i;
        c++;
        n--;
    }

    // вывод считанных данных на консоль
    printf("%-20s %5d \n", ptr->name, ptr->age);
    free(ptr);

    fclose(fp);
    return 0;
}