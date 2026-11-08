#include <stdio.h>

int main() {
    /* int mark1, mark2, mark3;

    printf("Enter Student 1 Mark : ");
    scanf("%d", &mark1);

    printf("Enter Student 2 Mark : ");
    scanf("%d", &mark2);

    printf("Enter Student 3 Mark : ");
    scanf("%d", &mark3);

    printf("Student 1 got %d marks\n", mark1);

    printf("Student 2 got %d marks\n", mark2);

    printf("Student 3 got %d marks\n", mark3); */

    /* int mark[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter Student %d Mark : ", i + 1);
        scanf("%d", &mark[i]);
    }

    for (int i = 0; i < 3; i++) 
        printf("Student %d got %d marks\n", i + 1, mark[i]); */

    /* int mark[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter Student %d Mark : ", i + 1);
        scanf("%d", &mark[i]);
    }

    for (int i = 0; i < 10; i++)
        printf("Student %d got %d marks\n", i + 1, mark[i]); */

    int mark[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter Student %d Mark : ", i + 1);
        scanf("%d", &mark[i]);
    }

    for (int i = 0; i < 3; i++) 
        mark[i] += 3;

    for (int i = 0; i < 3; i++)
        printf("Student %d got %d marks\n", i + 1, mark[i]);

    return 0;
}

/* 
TYPE name [SIZE];

    mark[3];

    mark[0];
    mark[1];
    mark[2];

    mark[i]
            0      1      2
    mark: _____, _____, _____
 */
