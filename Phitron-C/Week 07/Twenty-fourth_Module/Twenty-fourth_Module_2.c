#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

int main()
{
    struct Date today = {28, 5, 2022};

    /* today.day = 28;
    today.month = 5;
    today.year = 2022;

    today.year = 2023;

    today.year = today.year + 5;

    today = (struct Date) {1, 1, 2000}; */

    printf("%d-%d-%d\n", today.day, today.month, today.year);

    return 0;
}
