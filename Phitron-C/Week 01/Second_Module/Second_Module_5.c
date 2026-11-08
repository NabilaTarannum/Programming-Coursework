#include <stdio.h>

int main() {
    // int to double Conversion
    int number = 10;
    double realnumber = number;

    printf("number = %d, realnumber = %lf\n", number, realnumber);

    // double to int Conversion
    realnumber = 10.5;
    number = realnumber;

    printf("number = %d, realnumber = %lf\n", number, realnumber);

    // int type custing Conversion
    realnumber = 10.9;

    printf("realnumber = %lf\n", realnumber);
    printf("number = %d\n", (int)number);

    // // int type custing Conversion
    int number1 = 20, number2 = 8;
    double div = (double)number1 / (double)number2;

    printf("%d / %d = %lf", number1, number2, div);

    return 0;
}
