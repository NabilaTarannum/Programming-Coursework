#include <stdio.h>
#include <stdbool.h>
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

struct Binary
{
    char str[50];
};


struct Binary toBinary(unsigned int val, int k)
{
    struct Binary ans;
    int idx = 0;
    while (val > 0)
    {
        int d = val % 2;
        val = val / 2;
        ans.str[idx] = '0' + d;
        idx++;
    }
    for (int i = idx; i < k; i++)
    {
        ans.str[i] = '0';
    }
    ans.str[k] = 0;
    strrev(ans.str);
    return ans;
}

bool getBit(unsigned int get_mask, int get_k)
{
    return (get_mask & (1 << get_k)) != 0;
}

unsigned int setBit(unsigned int set_mask, int set_k)
{
    return set_mask | (1 << set_k);
}

unsigned int clearBit(unsigned int clear_mask, int clear_k)
{
    return clear_mask & ~(1 << clear_k);
}

unsigned int flipBit(unsigned int flip_mask, int flip_k)
{
    return flip_mask ^ (1 << flip_k);
}

int main()
{
    int x = 54;

    printf("%d = %s\n", x, toBinary(x, 8).str);

    for (int i = 0; i < 8; i++)
    {
        printf("%d'th bit:%d\n", i, getBit(x, i));
        printf("Clear: %s\n", toBinary(clearBit(x, i), 8).str);
        printf("Set: %s\n", toBinary(setBit(x, i), 8).str);
        printf("Flip: %s\n", toBinary(flipBit(x, i), 8).str);
    }
    return 0;
}
/*
unsigned char
12 = 00001100

int x;

get i'th bit
set i'th bit      -> make 1
clear i'th bit    -> make 0
flip i'th bit     -> 0 -> 1, 1 -> 0
*/
