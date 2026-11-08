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
    unsigned int x = 10;
    unsigned int y = 35;

    char sx[100], sy[100], sand[100], sor[100], sxor[100], snot[100];
    toBinary(x, sx, 8);
    toBinary(y, sy, 8);

    printf("sx = %s\n", sx);
    printf("sy = %s\n", sy);

    unsigned int and = x & y;
    toBinary(and, sand, 8);

    printf("and = %u\n", and);
    printf("and = %s\n", sand);

    /* unsigned int or = x | y;
    toBinary(or, sor, 8);

    printf("or = %u\n", or);
    printf("or = %s\n", sor); */

    /* unsigned int xor = x ^ y;
    toBinary(xor, sxor, 8);

    printf("xor = %u\n", xor);
    printf("xor = %s\n", sxor); */

    /* unsigned int not = ~y;
    toBinary(not, snot, 8);

    printf("not = %d\n", not);
    printf("not = %s\n", snot); */

    return 0;
}
/*

10  -> 0 0 0 0 1 0 1 0
35  -> 0 0 1 0 0 0 1 1
and -> 0 0 0 0 0 0 1 0
or  -> 0 0 1 0 1 0 1 1 
xor -> 0 0 1 0 1 0 0 1

not 35 -> 1 1 0 1 1 1 0 0

1 and 1 -> 1
1 and 0 -> 0
0 and 1 -> 0
0 1nd 0 -> 1

1 or 1 -> 1
1 or 0 -> 1
0 or 1 -> 1
0 or 0 -> 0

1 xor 1 -> 0
1 xor 0 -> 1
0 xor 1 -> 1
0 xor 0 -> 0

and -> &
or  -> |
xor -> ^
not -> ~
*/
