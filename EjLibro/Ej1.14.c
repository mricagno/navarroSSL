/* 
Navarro Leandro Adrian
12/04/2016
Ej1.14 
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