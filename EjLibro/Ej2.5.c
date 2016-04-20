/* 
Navarro Leandro Adrian
20/04/2016
Ej2.5 Escriba la función any(sl,s2), que regresa la primera posición de la cadena si en donde se encuentre cualquier carácter de la cadena s2, 
o -1 si no contiene caracteres de s2.
*/

#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);
int any(char s1[], char s2[]);

int main(void)
{
    int len;
    char s1[MAXLINE];
    char s2[MAXLINE];

    printf("Cadena:\n");
    while ((len = get_line(s1, MAXLINE)) == 0);

    printf("Caracter a buscar:\n");
    while ((len = get_line(s2, MAXLINE)) == 0);

    printf("El primer match es: %d\n", any(s1, s2));

    return 0;
}

int get_line(char s[], int lim)
{
    int c, i, l;

    for (i = 0, l = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        if (i < lim - 1)
            s[l++] = c;
    s[l] = '\0';

    return l;
}

int any(char s1[], char s2[])
{
    int i, j;

    i = 0;
    while (s2[i] != '\0') {
        j = 0;
        while (s1[j] != '\0') {
            if (s1[j] == s2[i])
                return j;
            ++j;
        }
        ++i;
    }

    return -1;
}