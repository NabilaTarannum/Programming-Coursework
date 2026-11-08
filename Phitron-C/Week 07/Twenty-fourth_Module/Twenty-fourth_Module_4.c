#include <stdio.h>
#include <stdbool.h>

struct Date
{
    int day;
    int month;
    int year;
};

bool isFirstDay(struct Date date)
{
    return date.day == 1 && date.month == 1;
}

struct Date getFirstDay(int year)
{
    struct Date nextDate = {1, 1, year};
    return nextDate;
}

void printDate(struct Date date)
{
    printf("%d-%d-%d\n", date.day, date.month, date.year);
}

int main()
{
    // struct Date date = {1, 1, 2022};

    // if (isFirstDay(date))
    // {
    //     printf("Happy New Year\n");
    // }

    struct Date date = getFirstDay(2040);
    printDate(date);

    return 0;
}

// Revisit, you should use comment out than run the code, otherwise it comes error.

#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

int daysInMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

struct Date getNextDate(struct Date date)
{
    struct Date nextDate = date;
    if (nextDate.day != daysInMonths[nextDate.month - 1])
    {
        nextDate.day++;
    }
    else if (nextDate.month != 12)
    {
        nextDate.month++;
        nextDate.day = 1;
    }
    else
    {
        nextDate.year += 1;
        nextDate.month = 1;
        nextDate.day = 1;
    }
    return nextDate;
};

void printDate(struct Date date)
{
    printf("%d-%d-%d\n", date.day, date.month, date.year);
}

int main()
{
    struct Date start;
    int days;

    printf("Start Date : ");
    scanf("%d %d %d", &start.day, &start.month, &start.year);

    printf("How many Days : ");
    scanf("%d", &days);

    struct Date current = start;
    for (int i = 0; i < days; i++)
    {
        current = getNextDate(current);
        printf("%dth day : ", i + 1);
        printDate(current);
    }
    return 0;
}
