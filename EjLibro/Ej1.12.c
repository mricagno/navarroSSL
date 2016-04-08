/* 
Navarro Leandro Adrian
08/04/2016
Ej1.12 Escriba un programa que imprima su entrada una palabra por línea.
*/

#include <stdio.h>

int main(void)
{
    int c, line;

    line = 0;
    printf("I need words to live, please:\n");
	
    while ((c = getchar()) != EOF)
        if (c == ' ' || c == '\t' || c == '\n') {
            if (line == 2) {
                putchar('\n');
                line = 1;
            }
        } 
		else {
            putchar(c);
            line = 2;
        }

    return 0;
}