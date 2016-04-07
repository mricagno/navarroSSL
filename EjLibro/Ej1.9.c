/* 
Navarro Leandro Adrian
07/04/2016
Ej1.9 Escriba un programa que copie su entrada a la salida, reemplazando cada cadena de uno o más blancos por un solo blanco
*/

#include <stdio.h>

int main(void)
{
    int c, e;	/*caracter, espacio*/
    e = 0;
    printf("Input some characters: \n");
    while ((c = getchar()) != EOF)
        if (c == ' ') {
            if (!e) {
                e = 1;
                putchar(c);
            }
        } else {
            e = 0;
            putchar(c);
        }

    return 0;
}