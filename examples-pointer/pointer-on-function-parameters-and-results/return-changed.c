#include <stdio.h>

int action1(void)
{
    printf("Action 1");
    return 1;
}

int action2(void)
{
    printf("Action 2");
    return 2;
}

int action3(void)
{
    printf("Action 3");
    return 3;
}


int (*select(int choice))(void)
{
    int (*actions[])() = {action1, action2, action3};

    if (choice > 0 && choice < 4)
        return actions[choice-1];
    else
        return NULL;
}


int main(void)
{
    int (*action)(void); // указатель на выбранную функцию
    int actionNumber; // результат функции - номер действия
    int choice;

    while(1)
    {
        printf("Select action (1, 2, 3): ");
        scanf("%d", &choice);
        action = select(choice); // получаем указатель на функцию
        if(action==NULL)
            break;
        actionNumber = action(); // выполняем функцию
        printf("\nselected action %d \n", actionNumber);
    }

    printf("End\n");
    return 0;
}
