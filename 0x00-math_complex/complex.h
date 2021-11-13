#ifndef COMPLEX_H
#define COMPLEX_H

#include <stdarg.h>

/**
 * struct nb_complex - complex type
 * @re: double
 * @im: double
 */
typedef struct nb_complex
{
double re;
double im;
} complex;

void display_complex_number(complex c);

#endif
