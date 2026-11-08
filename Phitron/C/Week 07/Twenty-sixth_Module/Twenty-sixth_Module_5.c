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

unsigned char RightRotate(unsigned char Rmask, int Rk)
{
    int lastk = Rmask & ((1 << Rk) - 1);
    return (Rmask >> Rk) | (lastk << (8 - Rk));
}

int main()
{
    unsigned char x = 54;
    printf("%d = %s\n", x, toBinary(x, 8).str);

    for (int i = 0; i < 8; i++)
    {
        unsigned char R = RightRotate(x, i);
        printf("Rotate %d: %s\n", i, toBinary(R, 8).str);
    }

    return 0;
}
/*
unsigned char
12 =01110101
    01011101

        12345678
rr 2    78123456
lr 2    34567812
*/
