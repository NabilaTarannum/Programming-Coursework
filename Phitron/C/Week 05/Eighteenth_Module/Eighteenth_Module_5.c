/* #include <stdio.h>
#include <string.h>

// void makePositive(int *pa)
// {
//     if (*pa < 0)
//     {
//         *pa = -*pa;
//     }
// }

// int makePositive(int pa)
// {
//     if (pa < 0)
//     {
//         pa = -pa;
//     }
//     return pa;
// }

void makeEqualToAverage(int *pa, int *pb)
{
    int av = (*pa + *pb) / 2;
    *pa = *pb = av;
}

int main()
{
    // int a = - 10;
    int a = 5, b = 7;;
    // makePositive(&a);
    // a = makePositive(a);
    makeEqualToAverage(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}

// a = 5, b = 8
// makeEqualToAvwrage(a, b)
// a = 6, b = 6
 */

#include <stdio.h>
#include <math.h>

/* double getRoot(double a, double b, double c)
{
    double d = b * b - 4 * a * c;
    return (-b + sqrt(d)) / (2 * a);
} */

/* double getRoot(double a, double b, double c)
{
    double d = b * b - 4 * a * c;
    return (-b + sqrt(d)) / (2 * a);
}

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("%lf", getRoot(a, b, c));
    return 0;
} */

int getRoot(double a, double b, double c, double *root1, double *root2)
{
    double d = b * b - 4 * a * c;
    if (d < 0)
        return 0;
    else if (d == 0)
    {
        *root1 = (-b) / (2 * a);
        return 1;
    }
    else
    {
        *root1 = (-b + sqrt(d)) / (2 * a);
        *root2 = (-b - sqrt(d)) / (2 * a);
        return 2;
    }
}

int main()
{
        double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double root1, root2;
    int roots = getRoot(a, b, c, &root1, &root2);
    printf("We have %d roots.\n", roots);
    if (roots >= 1)
        printf("%lf\n", root1);
    if (roots == 2)
        printf("%lf\n", root2);
}

/*
x ^ 2 - 5x + 6 = 0

(-b +- sqrt(b ^ 2 - 4 ac)) / 2a
*/
