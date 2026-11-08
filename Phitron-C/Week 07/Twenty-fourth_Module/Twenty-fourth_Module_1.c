#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

int main()
{
    /* int day1, day2;
    int month1, month2;
    int year1, year2;

    printf("Enter Person 1's Birthday : ");
    scanf("%d %d %d", &day1, &month1, &year1);

    printf("Enter Person 2's Birthday : ");
    scanf("%d %d %d", &day2, &month2, &year2);

    if (day1 == day2 && month1 == month2 && year1 == year2)
    {
        printf("Same");
    }
    else
    {
        printf("Not same");
    } */

    struct Date date1, date2;

    printf("Enter Person 1's Birthday : ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter Person 2's Birthday : ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year)
    {
        printf("Same");
    }
    else
    {
        printf("Not same");
    }
    return 0;
}
