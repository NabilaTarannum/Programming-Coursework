#include <stdio.h>
#include <string.h>

unsigned int binaryToInt(char str[])
{
    int len = strlen(str);

    unsigned int ans = 0;
    for (int i = len - 1, p2 = 1; i >= 0; i--, p2 *= 2)
    {
        int bit = str[i] - '0';
        // printf("%d %d %d\n", i, p2, bit);
        if (bit == 1)
        {
            ans += p2;
        }
    }
    return ans;
}

unsigned int BinaryToInt(char str[])
{
    int len = strlen(str);

    unsigned int ans = 0;
    for (int i = 0; i < len; i++)
    {
        int bit = str[i] - '0';
        // printf("%d %d %d\n", i, p2, bit);
        ans = ans * 2 + bit;
    }
    return ans;
}

void toBinary(unsigned int val, char str[])
{
    while (val > 0)
    {
        int d = val % 2;
        val = val / 2;
        printf("%d", d);
    }
}

void ToBinary(unsigned int val, char str[])
{
    int idx = 0;
    while (val > 0)
    {
        int d = val % 2;
        val = val / 2;
        str[idx] = '0' + d;
        idx++;
    }
    str[idx] = '\0';
}

int main()
{
    /* char str[256];
    gets(str);
    // printf("%d\n", binaryToInt(str));
    printf("%d\n", BinaryToInt(str)); */

    char str[256];
    unsigned int v = 10;
    // toBinary(v, str);
    ToBinary(v, str);
    printf("%s\n", str);

    return 0;
}
/*
0, 1

3210
1010

8 + 2 = 10
*/
