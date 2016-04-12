/* 
Navarro Leandro Adrian
08/04/2016
Ej1.13 Escriba un programa que imprima el histograma de las longitudes de las palabras de su entrada. 
Es fácil dibujar el histograma con las barras horizontales; la Orientación vertical es un reto más interesante.
*/

#include <stdio.h>

#define NUM_CHARS 128

int main(void)
{
    int c, i;
    int v_char[NUM_CHARS + 1];

    for (i = 0; i <= NUM_CHARS; ++i)
        v_char[i] = 0;

    printf("Ingresa lo que quieras\n");
	
    while ((c = getchar()) != EOF)
        ++v_char[c];

    printf("\n Char | Cant.\n");
	
    for (i = 0; i <= NUM_CHARS; ++i) 
        if (v_char[i] > 0)
            printf(" %5c : %5d\n", i, v_char[i]);

    return 0;
}