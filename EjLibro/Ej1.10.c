/* 
Navarro Leandro Adrian
07/04/2016
Ej1.10 Escriba un programa que copie su entrada a la salida, reemplazando cada tabulación por \t, cada retroceso por \b y cada diagonal invertida 
por \\
*/

#include <stdio.h>

int main(void)
{
    int c;

    printf("Escriba lo que se le cante\n");
	
    while ((c = getchar()) != EOF)
        if (c == '\t')
            printf("\\t");
        else if (c == '\b')
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else
            printf("%c", c);

    return 0;
}