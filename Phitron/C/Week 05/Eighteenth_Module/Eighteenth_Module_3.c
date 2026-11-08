#include <stdio.h>
#include <string.h>

void Truncate(char s[], int k) {
    int n = strlen(s);
    if (k < 0 || k > n)  return;
    s[k] = '\0';
} 

int main()
{
    char s[100];
    gets(s);

    int k;
    scanf("%d", &k);
    Truncate(s, k);

    printf("%s", s);
    return 0;
}

/* 
s = "abcdef"
truncate(s, 3);
s = "abc"

s -> 'a', 'b', 'c', 'd', 'e', 'f', '\0'

s -> 'a', 'b', 'c', '\0'
*/
