#include <stdio.h>
#include <string.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    char name[100];
    int class;
    int roll;
    struct Date dob;
};

void printDate(struct Date date)
{
    printf("%d-%d-%d\n", date.day, date.month, date.year);
}

void printStudent(struct Student student)
{
    printf("Name : %s\n", student.name);
    printf("Class : %d\n", student.class);
    printf("Roll : %d\n", student.roll);
    printf("DOB : ");
    printDate(student.dob);
}

int main()
{
    struct Student st1 = {
        .class = 9,
        .roll = 10,
        .dob = {1, 1, 2020}
    };

    char name[] = "Nguyen Van A";
    strcpy(st1.name, name);

    printStudent(st1);
}
