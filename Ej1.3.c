/* fichero temp1.c */

#include <stdio.h>

int main(void) {
	
    double gradosFahr, gradosCent;

    printf("grados Fahrenheit      grados Centigrados\n");
    printf("-----------------      ------------------\n\n");
    gradosFahr = 0.0;
    while (gradosFahr<=300.0) {
        gradosCent=(5*(gradosFahr-32.0))/9.0;
        printf("%17.2lf%17.2lf\n", gradosFahr, gradosCent);
        gradosFahr+=20.0;
    }
}