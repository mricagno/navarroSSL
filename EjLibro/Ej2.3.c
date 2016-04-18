/* 
Navarro Leandro Adrian
18/04/2016
Ej2.3 Escriba la función htoi(s), que convierte una cadena de dígitos hexadecimales (incluyendo Ox ó OX en forma optativa)
en su valor entero equivalente. Los dígitos permitidos son del 0 al 9, de la a a la f, y de la A a la F.
*/

#include <stdio.h>

#define MAXLINE 1000

int ishex(char c);
int htoi(char s[]);
int getline(char line[], int maxline);

int main(void)
{
	char line[MAXLINE];
	int i;

	printf("Ingrese algo HEXADECIMAL \n");

	while (getline(line, MAXLINE) > 0)
	{
		i = htoi(line);
		
		if (i > 0)
			printf("%d \n", i);
		else
			printf("Pifiaste \n");
	}
	return 0;
}

int getline(char line[], int maxline)
{
	int i, c;

	for (i=c=0; c != '\n' && (c = getchar()) != EOF && i < maxline-1; ++i)
		line[i] = c;
	
	line[i] ='\0';
	return i;
}

int htoi(char s[])
{
	int i, n;
	n = 0;

	if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
		i = 2;
	else
		i = 0;

	while (ishex(s[i]) == 1)
	{
		if (s[i] >= '0' && s[i] <= '9')
			n = 16 * n + (s[i] - '0');
		else if (s[i] >= 'a' && s[i] <= 'f')
			n = 16 * n + ((s[i] - 'a') + 10);
		else if (s[i] >= 'A' && s[i] <= 'F')
			n = 16 * n + ((s[i] - 'A') + 10);
		++i;
	}
	return n;
}

int ishex(char c)
{
	if (c >= '0' && c <= '9')
		return 1;
	else if (c >= 'a' && c <= 'f')
		return 1;
	else if (c >= 'A' && c <= 'F')
		return 1;
	else
		return 0;
}