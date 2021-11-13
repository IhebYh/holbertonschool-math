#include "holberton.h"
/**
 * display_complex_number - displaying a complex number
 * @c: complex
 * Return - void
 */
void display_complex_number(complex c)
{
if (c.re == 0)
{
if (c.im < 0)
printf("- %.9gi\n", c.im * (-1));
else if (c.im == 0)
printf("0\n");
else
printf("%.9g\n", c.im);
}
if (c.re < 0 && c.im < 0)
printf("%.9g - %.9gi", c.re, c.im * (-1));
else if (c.re < 0 || c.im < 0)
{
if (c.re < 0)
printf("%.9g + %.9gi", c.re, c.im);
else if (c.im < 0)
printf("%.9g - %.9gi", c.re, c.im * (-1));
}
else if (c.im == 0)
printf("%.9g", c.re);
else
printf(" %.9g + %.9gi", c.re, c.im);
printf("\n");
}
