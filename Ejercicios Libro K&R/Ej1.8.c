/* 
Navarro Leandro Adrian
06/04/2016
Ej1.8 Contador de espacios en blanco, tabuladores y saltos de linea
*/

#include <stdio.h>

int main(void){

	int Cadena;
	int ContEsp = 0;
	int ContTab = 0;
	int ContSal = 0;

	printf("\nIngrese a continuacion una cadena para obtener los contadores de ESPACIOS EN BLANCO, TABULADORES Y SALTOS DE LINEA:\n");
	printf("Finalice la frase con Ctrl+Z\n");

	while((Cadena = getchar()) != EOF){
		
		//Contador espacios en blanco
		if(Cadena == ' '){
			++ContEsp;
		}
		//Contador tabuladores
		if(Cadena == '\t'){
			++ContTab;
		}
		//Contador Saltos de linea
		if(Cadena == '\n'){
			++ContSal;
		}
	}

	printf("Espacios en blanco totales: %d\n", ContEsp);
	printf("Tabuladores totales: %d\n", ContTab);
	printf("Saltos de lineas totales: %d\n", ContSal);

  return 0;
}