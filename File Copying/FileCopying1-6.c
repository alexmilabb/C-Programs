#include <stdio.h>
/* copy input to output; 2nd version */
main()
    printf("EOF\n")
{
    int EOF;
    while ((EOF = getchar()) != EOF)
        putchar(EOF);
}