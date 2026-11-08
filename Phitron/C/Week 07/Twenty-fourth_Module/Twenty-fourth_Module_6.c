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

struct Date inputDate()
{
    struct Date date;
    scanf("%d %d %d", &date.day, &date.month, &date.year);
    return date;
}

struct Student inputStudent()
{
    struct Student st;

    printf("Name : ");
    gets(st.name);
    gets(st.name);

    printf("Class : ");
    scanf("%d", &st.class);

    printf("Roll : ");
    scanf("%d", &st.roll);

    printf("DOB : ");
    st.dob = inputDate();

    return st;
};

int main()
{
    int n;
    printf("Number of Students in class : ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 1; i <= n; i++)
    {
        printf("Input Student %d Info\n", i);
        students[i - 1] = inputStudent();
    }

    for (int i = 1; i <= n; i++)
    {
        printf("Student %d Info\n", i);
        printStudent(students[i - 1]);
    }
    return 0;
}
