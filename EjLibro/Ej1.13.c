/* 
Navarro Leandro Adrian
08/04/2016
Ej1.13 Escriba un programa que imprima el histograma de las longitudes de las palabras de su entrada. 
Es fácil dibujar el histograma con las barras horizontales; la Orientación vertical es un reto más interesante.
*/

#include <stdio.h>

#define MAX_LEN 15

int main(void)
{
	int vec_len[MAX_LEN];
	int i, j;
	int c, cont, max;

	//Inicializacion del vector de longitudes
    for (i = 0; i <= MAX_LEN; ++i)
        vec_len[i] = 0;

	cont = 0;
    printf("Ingresa muchas palabras WACHO \n");
	
	while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\t' || c == '\n') {
			++vec_len[cont];
			cont = 0;
        } 
		else {
			++cont;
        }
	}	
/*		
	printf("\nHistograma Horizontal de Longitudes:\n\n");
    for (i = 1; i <= MAX_LEN; ++i) {
        if (i != MAX_LEN)
            printf("     %2d | ", i);
        else
            printf("    >%2d | ", MAX_LEN);
		
        for (j = 0; j < vec_len[i]; ++j)
            putchar('+');
        putchar('\n');
    }
*/
    printf("\nHistograma Vertical de Longitudes:\n\n");
    max = 0;
    for (i = 1; i <= MAX_LEN; ++i)
        if (vec_len[i] > max)
            max = vec_len[i];
		
    for (i = 1; i <= max; ++i) {
        printf("  %2u | ", max - i + 1);
		
        for (j = 1; j <= MAX_LEN; ++j)
            if (vec_len[j] >= max - i + 1)
                printf("  +");
            else
                printf("   ");
        printf("\n");
    }

    printf(" ------");
    for (i = 1; i <= MAX_LEN; ++i)
        printf("---");
    printf("--\n");

    printf("       ");
	
    for (i = 1; i < MAX_LEN; ++i)
        printf(" %2u", i);
    printf(" >%2u", MAX_LEN);
    printf("\n");

    return 0;
}