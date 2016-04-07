/* 
Navarro Leandro Adrian
05/04/2016
Centigrados to Fahrenheit desc
*/

#include <stdio.h>

int main(void) {
	
    float F, C;

    printf("Centigrados \t Fahrenheit\n");
    printf("----------- \t ----------\n\n");
	
    C = 300.0;
	
    while (C > 0.0) {
        F = ((9.0/5.0) * C) + 32.0;
        printf("%3.0f \t\t %3.4f \n", C, F);
        C -= 20.0;
    }
}