/* 
Navarro Leandro Adrian
15/04/2016
Ej2.1 Escriba un programa para determinar los rangos de variables char, short, int y long, tanto signed como unsigned, 
imprimiendo los valores apropiados de los headers estándar y por cálculo directo. Es más difícil si los calcula: determine los rangos de los 
varios tipos de punto flotante.
*/

#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("Rango de CHAR SIGNED: [%d, %d].\n", SCHAR_MIN, SCHAR_MAX);
    printf("Rango de CHAR UNSIGNED: [%u, %u].\n", 0, UCHAR_MAX);
    printf("Rango de CHAR: [%d, %d].\n", CHAR_MIN, CHAR_MAX);

    printf("Rango de SHORT INT SIGNED: [%hd, %hd].\n", SHRT_MIN, SHRT_MAX);
    printf("Rango de SHORT INT UNSIGNED: [%hu, %hu].\n", 0, USHRT_MAX);

    printf("Rango de INT SIGNED: [%d, %d].\n", INT_MIN, INT_MAX);
    printf("Rango de INT UNSIGNED: [%u, %u].\n", 0, UINT_MAX);

    printf("Rango de LONG INT SIGNED: [%ld, %ld].\n", LONG_MIN, LONG_MAX);
    printf("Rango de LONG INT UNSIGNED: [%lu, %lu].\n", 0, ULONG_MAX);

    return 0;
}