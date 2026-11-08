#include <stdio.h>

int get_length(char input[])
{
    int index = 0;
    while (input[index] != '\0')
    {
        index++;
    }
    return index;
}

int main()
{
    char a[] = "hello", b[] = "world";
    int length1 = get_length(a);
    int length2 = get_length(b);
    length2 *= 3;
    printf("Length of a -> %d\n", length1);
    printf("Length of b -> %d\n", length2);
    return 0;
}
