#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[10];
    char abbr[3];
    int days;
    int index;

} month;

static const month MONTHS[12] =
        {
        (month){"January", "JAN", 31, 1},
        (month){"February", "FEB", 28, 2},
        (month){"March", "MAR", 31, 3},
        (month){"April", "APR", 30, 4},
        (month){"May", "MAY", 31, 5},
        (month){"June", "JUN", 30, 6},
        (month){"July", "JUL", 31, 7},
        (month){"August", "AUG", 31, 8},
        (month){"September", "SEP", 30, 9},
        (month){"October", "OCT", 31, 10},
        (month){"November", "NOV", 30, 11},
        (month){"December", "DEC", 31, 12},
        };

int get_number_of_days_by_index(int);
int get_number_of_days_by_name(char *);

int main(void)
{
    printf("%d\n", get_number_of_days_by_index(1));
//    printf("%d\n", get_number_of_days_by_index(2));
//    printf("%d\n", get_number_of_days_by_index(3));
//    printf("%d\n", get_number_of_days_by_index(4));
//    printf("%d\n", get_number_of_days_by_index(5));
//    printf("%d\n", get_number_of_days_by_index(6));
//    printf("%d\n", get_number_of_days_by_index(7));
//    printf("%d\n", get_number_of_days_by_index(8));
//    printf("%d\n", get_number_of_days_by_index(9));
//    printf("%d\n", get_number_of_days_by_index(10));
//    printf("%d\n", get_number_of_days_by_index(11));
    printf("%d\n", get_number_of_days_by_index(12));
    printf("%d\n", get_number_of_days_by_name("January"));
    printf("%d\n", get_number_of_days_by_name("December"));

    return 0;
}

int get_number_of_days_by_index(int index)
{
    int res = 0;
    for (int i = 0; i < index; i++)
        res += MONTHS[i].days;
    return res;
}

int get_number_of_days_by_name(char * month_name)
{
    int res = 0;
    for (int i = 0; i < 12; i++)
    {
        res += MONTHS[i].days;
        if (strcmp(MONTHS[i].name, month_name) == 0)
            break;
    }
    return res;
}
