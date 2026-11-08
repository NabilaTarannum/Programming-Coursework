#include <stdio.h>

int add(int a, int b) {
    static int count = 0;
    count++;
    printf("%d th call\n", count);
    return a + b;
}

int main()
{
    add(1, 2);
    add(1, 3);
    add(2, 2);
    add(2, 4);

    return 0;
}
/* int getMin(int a, int b) {
    int temp;
    if (a < b)  temp = a;
    else        temp = b;
    return temp;
}

int main() {
    int a = 10, b= 12;
    int min = getMin(a, b);
    printf("%d", temp);
    return 0;
} */

/*
return_type name(parameters) {
    // Code
}
1
1 + 2 = 3
1 + 2 + 3 = 6

1, 3, 6, 10, 15
*/
