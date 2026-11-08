#include <stdio.h>

int main() {
    int number_of_users;
    scanf("%d", &number_of_users);

    int ratings[number_of_users];
    for (int i = 0; i < number_of_users; i++)
        scanf("%d", &ratings[i]);

    int sum = 0;
    for (int i = 0; i < number_of_users; i++)
        sum += ratings[i];

    double average = (double)(sum) / number_of_users;
    printf("Average = %lf", average);

    int count[6] = {0};

    // count[1], count[2], ......, count[5]
    for (int i = 0; i < number_of_users; i++) {
        int x = ratings[i];
        count[x]++;
    }

    for (int i = 1; i <= 5; i++) 
        printf("%d -> %d\n", i, count[i]);
    return 0;
}

/* 
5 1 2 4 2 5 1 2 5 4
5 -> 3
4 -> 2
3 -> 0
2 -> 3
1 -> 2
*/
