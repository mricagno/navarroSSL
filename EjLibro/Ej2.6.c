/* 
Navarro Leandro Adrian
25/04/2016
Ej2.6 Escriba una función setbits(x,p,n,y) que regresa x con los n bits que principian en la posición p iguales a los n bits más a la derecha de y, 
dejando los otros bits sin cambio.
*/

#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main(void)
{
    printf("%u\n", setbits(5732, 6, 3, 9823));
    return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    unsigned a = x & ~(~(~0U << n) << (p + 1 - n));
	unsigned b = (y & ~(~0U << n)) << (p + 1 - n);
	return a | b;
}