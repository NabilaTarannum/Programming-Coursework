#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello";
    /* for (int i = 0; i < 6; i++)
    {
        printf("%c %d\n", str[i], str[i]);
    } */
    // printf("%s", str + 1);

    char *pos = strchr(str, 'e');
    printf("%s\n", pos);
    if (!pos)
    {
        printf("Not found");
    }
    else
    {
        printf("Found at %ld", pos - str);
    }

    printf("\n\n");

    char *ppos = strstr(str, "e");
    printf("%s\n", ppos);
    if (!ppos)
    {
        printf("Not found");
    }
    else
    {
        printf("Found at %ld", ppos - str);
    }

    printf("\n\n");

    char text[100], pattern[100];
    gets(text);
    gets(pattern);

    char *Pos = strstr(text, pattern);
    printf("%s\n", Pos);
    if (!Pos)
    {
        printf("Not found");
    }
    else
    {
        printf("Found at %ld", Pos - text);
    }

    printf("\n\n");

    char text_[100], pattern_;
    gets(text_);
    scanf(" %c", &pattern_);

    char *cur = text_;

    while (cur)
    {
        char *pos_ = strchr(cur, pattern_);
        if (pos_ == NULL)
            break;
        printf("Found  at %ld\n", pos_ - text_);
        cur = pos_ + 1;
    }

    return 0;
}
