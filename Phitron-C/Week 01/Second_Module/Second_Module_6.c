/*

Write a program to find the perimeter and area of circle.
The program will ask the user for a radius. and Then print the perimeter and area

Sample Interaction :
    Enter radius : 1
    Perimeter = 6.28
    Area = 3.14

    Peimeter = 2 * pi * r
    Area = pi * r ^ 2
*/
#include <stdio.h>

int main() {
    printf("Enter radius : ");

    double r;
    scanf("%lf", &r);

    const double PI = 3.1416;

    double perimeter = 2 * PI * r;
    printf("perimeter = %.2lf\n", perimeter);

    double area = PI * r * r;
    printf("area = %.2lf\n", area);
    return 0;
}
