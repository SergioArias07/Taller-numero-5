/*
PROGRAMA: punto 3 de funciones y arreglos 
FECHA: 12 de Septiembre del 2018
ELABORADO POR: Sergio Arias Rendon
*/

#include <conio.h>
#include <stdio.h>


//funcion de ingreso de numeros
void numeros(int num1[], int n){
	printf("Ingrese todos los numeros: \n");
	for(int i = 0; i < n; i ++){
		scanf("%d", &num1[i]);
	}
}
//funcion mayor
void mayor(int num1[], int n){
	int tempo;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - 1; j++){
			if( num1[j] < num1[j+1]){
				tempo = num1[j];
				num1[j] = num1[j+1];
				num1[j+1] = tempo;  
			}	     	
		}
	} 	 
}
//funncion numeros organizados 
void result(int num1[], int n){
	printf("Numeros organizados de mayor a menor: \n");
	for(int i = 0; i < n; i++){
		printf("%d\n", num1[i]);
	}
}
//funcion principal
int main() {
	int num2[100];
	int tm;
	printf("cuantos numeros quiere ordenar: ");
	scanf("%d", &tm);
	numeros(num2, tm);
	mayor(num2, tm);
	result(num2, tm);
	
	return 0;
}
