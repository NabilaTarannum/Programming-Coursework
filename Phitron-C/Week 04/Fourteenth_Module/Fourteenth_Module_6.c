#include <stdio.h>
#include <stdbool.h>

int main()
{
    int year;
    scanf("%d", &year);

    for (int y = year + 1; ; y++)
    {
        int fr[10] = {0}, curyear = y;
        bool repeat = false;
        while (curyear > 0)
        {
            int d = curyear % 10;
            curyear /= 10;
            fr[d]++;
            if (fr[d] >= 2)
                repeat = true;
        }
        if (!repeat)
        {
            printf("%d\n", y);
            break;
        }
    }
    return 0;
}
