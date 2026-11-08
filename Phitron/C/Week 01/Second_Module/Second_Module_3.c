# include <stdio.h>

int main() {
    // integer

    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int Addition = num1 + num2;
    printf("addition = %d + %d = %d\n", num1, num2, Addition);

    int Subtraction = num1 - num2;
    printf("Subtraction = %d - %d = %d\n", num1, num2, Subtraction);

    int Multiply = num1 * num2;
    printf("Multiply = %d * %d = %d\n", num1, num2, Multiply);

    int Division = num1 / num2;
    printf("Division = %d / %d = %d\n", num1, num2, Division);

    int Modulus = num1 % num2;
    printf("Modulus = %d %% %d = %d\n", num1, num2, Modulus);

    // double

    double _num1, _num2;
    scanf("%lf %lf", &_num1, &_num2);

    double _Addition = _num1 + _num2;
    printf("addition = %lf + %lf = %lf\n", _num1, _num2, _Addition);

    double _Subtraction = _num1 - _num2;
    printf("Subtraction = %lf - %lf = %lf\n", _num1, _num2, _Subtraction);

    double _Multiply = _num1 * _num2;
    printf("Multiply = %lf * %lf = %lf\n", _num1, _num2, _Multiply);

    double _Division = _num1 / _num2;
    printf("Division = %lf / %lf = %lf\n", _num1, _num2, _Division);

    /* It was not defined
    double _Modulus = _num1 % _num2;
    printf("Modulus = %lf %% %lf = %lf\n", _num1, _num2, _Modulus);
    */

    return 0;
}
