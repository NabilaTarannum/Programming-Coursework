#include <stdio.h>
#include <stdbool.h>

int main () {
    /* printf("Enter Marks: ");

    int marks;
    scanf("%d", &marks);

    if (marks >= 80) {
        printf("Grade = A+");
    }
    else if (marks >= 70) {
        printf("Grade = A");
    }
    else if (marks >= 60) {
        printf("Grade  = B");
    }
    else if (marks >= 50) {
        printf("Grade = C");
    }
    else if (marks >= 40) {
        printf("Grade = D");
    }
    else {
        printf("Grade = F");
    } */

    /* int number_of_subjects, total_grade_point = 0;

    scanf("%d", &number_of_subjects);

    for (int i = 1; i <= number_of_subjects; i++) {
        printf("Enter Marks: ");
        
        int marks, grade_point;
        scanf("%d", &marks);

        if (marks >= 80)
        {
            printf("Grade = A+\n");
            grade_point = 5;
        }
        else if (marks >= 70)
        {
            printf("Grade = A\n");
            grade_point = 4;
        }
        else if (marks >= 60)
        {
            printf("Grade  = B\n");
            grade_point = 3;
        }
        else if (marks >= 50)
        {
            printf("Grade = C\n");
            grade_point = 2;
        }
        else if (marks >= 40)
        {
            printf("Grade = D\n");
            grade_point = 1;
        }
        else
        {
            printf("Grade = F\n");
            grade_point = 0;
        }
        total_grade_point += grade_point;
        printf("Grade Point = %d\n", grade_point);
    }
    double gpa = (double)total_grade_point / number_of_subjects;
    printf("GPA = %lf\n", gpa);
 */

    int number_of_subjects, total_grade_point = 0;
    scanf("%d", &number_of_subjects);

    bool failed = false;

    for (int i = 1; i <= number_of_subjects; i++)
    {
        printf("Enter Marks: ");

        int marks, grade_point;
        scanf("%d", &marks);

        if (marks >= 80)
        {
            printf("Grade = A+\n");
            grade_point = 5;
        }
        else if (marks >= 70)
        {
            printf("Grade = A\n");
            grade_point = 4;
        }
        else if (marks >= 60)
        {
            printf("Grade  = B\n");
            grade_point = 3;
        }
        else if (marks >= 50)
        {
            printf("Grade = C\n");
            grade_point = 2;
        }
        else if (marks >= 40)
        {
            printf("Grade = D\n");
            grade_point = 1;
        }
        else
        {
            printf("Grade = F\n");
            grade_point = 0;
            failed = true;
        }
        total_grade_point += grade_point;
        printf("Grade Point = %d\n", grade_point);
    }

    if (failed) {
        printf("You have failed. GPA = 0.0\n");
    }
    else {
        double gpa = (double)total_grade_point / number_of_subjects;
        printf("GPA = %lf\n", gpa);
    }

    return 0;
}