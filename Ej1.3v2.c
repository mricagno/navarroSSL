/* 
Navarro Leandro Adrian
05/04/2016
Fahrenheit to Centigrados v2
*/

#include <stdio.h>

int main(void) {
	
    float gradosFahr, gradosCent;

    printf("Fahrenheit \t Centigrados\n");
    printf("---------- \t -----------\n\n");
    gradosFahr = 0.0;
	
    while (gradosFahr <= 300.0) {
        gradosCent = (5.0/9.0) * (gradosFahr - 32.0);
        printf("%3.0f \t\t %3.6f \n", gradosFahr, gradosCent);
        gradosFahr += 20.0;
    }
}