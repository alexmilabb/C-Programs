#include <stdio.h>

int main()
{

    int c, line, tab, blank;

    line = 0;
    tab = 0;
    blank = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++line;

        if (c == '\t')
            ++tab;

        if (c == ' ')
            ++blank;
    }
    printf("Lines: %d\n  Tabs: %d\n Blanks: %d\n", line, tab, blank);

    return 0;
}