/*
PROGRAMA: punto 2 funciones y arreglos, pedir dos numeros al usuario
FECHA: 11 de Septiembre del 2018
ELABORADO POR: Sergio Arias Rendon
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

//Prototipo
void arreglo(int v1,int v2);

//Funcion matrix
void arreglo(int v1,int v2){
	// Llenar elementos
	srand(time(NULL));
	int matrix[100][100];
	for(int i = 0; i < v1; i++){
		for(int j = 0; j < v2; j++){
			matrix[i][j] = 0 + rand() % (2 - 0);
			printf("En la posicion [%d][%d] esta: %d\n", i,j, matrix[i][j]);
		}
	}
	//Separador
	printf("\nMatrix: \n");	
	// Mostrar matrix
	for(int i = 0; i < v1; i++){
		for(int j = 0; j < v2; j++){
			printf("%d ", matrix[i][j]);
		}	
		printf("\n");
	}
}

//Funcion principal
int main(int argc, char *argv[]) {
	int v1, v2;
	printf("Ingrese el primer valor: ");
	scanf("%d", &v1);
	printf("Ingrese el segundo valor: ");
	scanf("%d", &v2);
	arreglo(v1,v2);	
	getch();
}
