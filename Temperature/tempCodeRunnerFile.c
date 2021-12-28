#include <stdio.h>
/* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300; floating-point version */

main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;    /* lower limit of temperatuire scale */
    upper = 300;  /* upper limit */
    step = 20;    /* step size */
    fahr = lower; //FAHR IS ZERO IN THIS CASE!

    printf("Celsius - Fahrenheit\n");
    printf("--------------------\n\n");

    while (fahr <= upper) // THE LOOP IS USED FOR EACH LINE OF THE OUTPUT
    {
        // fahr = (celsius -32.0) * (5.0 / 9.0);
        celsius = (5.0 / 9.0) * (fahr - 32.0);   //
        printf("%3.1f\t%6.0f\n", celsius, fahr); //
        fahr = fahr + step;
    }
}
