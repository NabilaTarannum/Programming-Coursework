#include <stdio.h>

int main()
{
    int n = 10;
    int count = 0;
    int note;

    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &note);
        if (note == 100)
        {
            // 100 hole
            count++;
        }
    }
    printf("note -%d count -%d", note, count);
    return 0;
}
