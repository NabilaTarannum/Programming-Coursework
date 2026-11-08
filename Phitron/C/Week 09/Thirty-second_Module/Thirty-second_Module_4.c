#include <stdio.h>
#include <string.h>

void check_char(char input[], char ch)
{
    for(int i = 0; i < strlen(input); i++)
    {
        char val = input[i];
        if(val == ch)
        {
            printf("Yes\n");
            return;
        }
    }
    printf("No\n");
}

int main()
{
    char a[] = "hello", b[] = "world";
    char c = 'o';
    check_char(a, c);
    return 0;
}
