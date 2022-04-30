#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

/**
5. Tomando como base los resultados obtenidos en un laboratorio de an�lisis cl�nicos, un m�dico determina si una persona
tiene anemia o no, lo cual depende de su nivel de hemoglobina que en la sangre, de su edad y de su sexo.
Si el nivel de hemoglobina que tiene una persona es menor que el rango que le corresponde, se determina su resultado como
positivo y en caso contrario como negativo. La tabla en la que el m�dico se basa para obtener el resultado es la siguiente:

Edad | Nivel Hemoblobina
-----|------------------
0 - 1 mes | 13 - 25 g%
> 1 y <= 6 meses | 10 -18 g%
> 6 y <= 12 meses | 11 - 16 g%
> 1 y <= 5 a�os | 11.5 - 15 g%
> 5 y <= 10 a�os | 12.6 - 15.5 g%
> 10 y <= 15 a�os | 13 - 15.5 g%
mujeres > 15 a�os | 12 - 16 g%
hombres > 15 a�os | 14 - 18 g%

*/
int main(int argc, char *argv[]) {
	
	int bebe, genero;
	int edad;
	float nivel;
	
	printf("La persona es menor de 1 a�o \nSi = 1\nNo = 0\n: ");
	scanf("%d",&bebe);
	
	
	if (bebe){
		printf("\nIngrese la los meses del ni�o(a): ");
		scanf("%d",&edad);
		printf("Ingrese el nivel de Hemoglobina: ");
		scanf("%f",&nivel);
		
		if ( (edad >= 0 && edad <= 1) && (nivel >= 13 && nivel <= 26) ){
			printf("El beb� tiene Anemia");
		} else if  ( (edad > 1 && edad <= 6) && (nivel >= 10 && nivel <= 18) ){
			printf("El beb� tiene Anemia");
		} else if  ( (edad > 6 && edad <= 12) && (nivel >= 11 && nivel <= 15) ){
			printf("El beb� tiene Anemia");
		} else {
			printf("Afortunadamente el Beb� no tiene Anemia");
		}
		
	} else {
		
		printf("\nIngrese la edad de la persona: ");
		scanf("%d",&edad);
		printf("Ingrese el g�nero de la persona\nMasculino = 1\nFemenino = 0\n: ");
		scanf("%d",&genero);
		printf("Ingrese el nivel de Hemoglobina: ");
		scanf("%f",&nivel);

		
		if  ( (edad > 1 && edad <= 5) && (nivel >= 11.5 && nivel <= 15) ){
			printf("La persona tiene Anemia");
		}
		else if  ( (edad > 5 && edad <= 10) && (nivel >= 12.6 && nivel <= 15.5) ){
			printf("La persona tiene Anemia");
		}
		else if  ( (edad > 10 && edad <= 15) && (nivel >= 13 && nivel <= 15.5) ){
			printf("La persona tiene Anemia");
		}
		else if  ( (edad > 15) && !genero  && (nivel >= 12 && nivel <= 16) ){
			printf("La Mujer tiene Anemia");
		}
		else if  ( (edad > 15) && genero && (nivel >= 14 && nivel <= 18) ){
			printf("El Hombre tiene Anemia");
		} else {
			printf("Afortunadamente la persona no tiene anemia");
		}
		
	}
	
	
	return 0;
}

