#include <stdio.h>
#include <string.h>

char *strrev(char *str)
{
    if (!str || !*str)
    {
        return str;
    }
    int i = strlen(str) - 1, j = 0;

    char ch;
    while (i > j)
    {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i--;
        j++;
    }
    return str;
}

void toBinary(unsigned int val, char str[], int k)
{
    int idx = 0;
    while (val > 0)
    {
        int d = val % 2;
        val = val / 2;
        str[idx] = '0' + d;
        idx++;
    }
    for (int i = idx; i < k; i++)
    {
        str[i] = '0';
    }
    str[k] = 0;
    strrev(str);
}

int main()
{
    unsigned int x = 35;
    char sx[100], sy[100], sleft[100], sright[100];

    /* int lx = x << 1;
    int rx = x >> 1; */

    unsigned char lx = x << 2;
    unsigned char rx = x >> 2;

    toBinary(lx, sleft, 8);
    toBinary(rx, sright, 8);

    printf("lx = %d, %s\n", lx, sleft);
    printf("rx = %d, %s\n", rx, sright);

    return 0;
}
/*

123456
234560

35 -> 0 0 1 0 0 0 1 1
rs -> 0 0 0 1 0 0 0 1
ls -> 0 1 0 0 0 1 1 0
*/
