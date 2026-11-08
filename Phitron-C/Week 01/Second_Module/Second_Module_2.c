#include <stdio.h>

int main() {
    int marks_english, marks_bangla;

    printf("Enter marks ");
    scanf("%d %d", &marks_english, &marks_bangla);

    int total = marks_english + marks_bangla;
    printf("Total marks %d", total);
    return 0;
}
