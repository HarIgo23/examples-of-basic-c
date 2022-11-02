#include <stdio.h>

int write(char *filename, char message[], int n);
int read(char *filename);

int main(void)
{
    char hello[] = "Hello World!";
    char *filename = "hello_world.txt";

    int n = sizeof(hello)/sizeof(char);
    write(filename, hello, n);

    read(filename);
    printf("\n");

    return 0;
}

int write(char *filename, char message[], int n)
{
    FILE *fp;
    if ((fp=fopen(filename, "w")) == NULL)
    {
        perror("Error occurred while opening file");
        return 1;
    }

    for(int i=0; i < n; i++)
        putc(message[i], fp);

    fclose(fp);
    return 0;
}

int read(char *filename)
{
    FILE *fp;
    char c;

    if ((fp=fopen(filename, "r")) == NULL)
    {
        perror("Error occurred while opening file");
        return 1;
    }

    while ((c=(char)getc(fp)) != EOF)
    {
        printf("%c", c);
    }
    fclose(fp);
    return 0;
}
