/* 
TP1 - Grupo 01
14/06/2016
Ej1.23 Escriba un programa para eliminar todos los comentarios de un programa en C. 
No olvide manejar apropiadamente las cadenas entre comillas y las constantes de carácter. Los comentarios de C no se anidan.
*/

#include <stdio.h>

#define MAXLENGTH 5000

int getlinea(char s[], int max);

int main(void)
{
    int len, i;
    char s[MAXLENGTH];
    
    printf("Ingrese el código a procesar, luego aprete Ctrl+Z:\n");
	
    while ((len = getlinea(s, MAXLENGTH)) > 0) {
		
        printf("\Resultado:\n\n");
        i = 0;
		
        while (s[i] != '\0') {
            if (s[i] == '/' && s[i+1] == '/') {
                i += 2;
                while (s[i] != '\n' && s[i] != '\0')
                    ++i;
            } else if (s[i] == '/' && s[i+1] == '*') {
                i += 2;
                while (s[i] != '\0' && s[i+1] != '\0' && (s[i] != '*' || s[i+1] != '/'))
                    ++i;
                if (s[i] != '\0' && s[i+1] == '\0')
                    ++i;
                if (s[i] == '*')
                    i += 2;
            } else if (s[i] == '\"') {
                putchar('\"');
                ++i;
                while (s[i] != '\0' && (s[i-1] == '\\' || s[i] != '\"'))
                    putchar(s[i++]);
            } else {
                putchar(s[i++]);
            }
        }
    }
    
    return 0;
}

int getlinea(char s[], int max)
{
    int c, i, l;

    for (i = 0, l = 0; (c = getchar()) != EOF; ++i)
        if (i < max - 1)
            s[l++] = c;
    s[l] = '\0';

    return l;
}