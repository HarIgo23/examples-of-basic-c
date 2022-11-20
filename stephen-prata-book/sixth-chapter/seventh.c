#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[20];
    printf("Enter any word: ");
    scanf("%s", word);
    for (int i = (int)strlen(word); i >= 0; i--)
        printf("%c", word[i]);
    printf("\n");

    return 0;
}