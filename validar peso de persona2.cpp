#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	float last_peso, peso, promedio; 
	int persona = 1, basculas = 10;
	
	do {
		printf("\nIngrese el �ltimo peso de la %d persona: ", persona);
		scanf("%f", &last_peso);
		printf("\nIngrese los pesos de las diferentes b�sculas.\n");
		promedio = 0;
		
		int i = 1;
		do {
			printf("Ingrese peso de la b�scula %d: ", i);
			scanf("%f", &peso);
			promedio += peso;
			i++;
		} while(i<=basculas);
		
		promedio = (promedio/basculas);
		
		if (promedio > last_peso){
			printf("SUBI� de Peso. Subi� %.2f kilos\n", (promedio - last_peso));
		} else if (promedio < last_peso){
			printf("BAJ� de Peso. Baj� %.2f kilos\n", (last_peso - promedio) );
		} else {
			printf("Se mantuvo con el mismo peso\n");
		}
		
		persona++;
	} while( persona <= 5);
	
	return 0;
}

