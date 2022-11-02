#include <stdio.h>

int main(void)
{
    char * message = "Hello \nworld!\nAn apple a day keeps the doctor away";
    char * filename = "text.txt";
    char cc[256];
    FILE *fp;

    // запись в файл
    if((fp= fopen(filename, "w"))==NULL)
    {
        perror("Error occured while opening file");
        return 1;
    }
    // записываем строку
    fputs(message, fp);
    fclose(fp);

    // чтение из файла
    if((fp= fopen(filename, "r"))==NULL)
    {
        perror("Error occured while opening file");
        return 1;
    }
    // пока не дойдем до конца, считываем по 256 байт
    while((fgets(cc, 256, fp))!=NULL)
    {
        printf("%s", cc);
    }

    fclose(fp);
    return 0;
}