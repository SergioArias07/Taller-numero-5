/*
PROGRAMA: punto 3 funciones pedir un valor al usuario 
y sacar error si es negativo
FECHA: 10 de Septiembre del 2018
ELABORADO POR: Sergio Arias Rendon
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>


//prototipo
void positivo();

void positivo(){
	//variable declarda 
	int v1;
	//valor a pedir al usuario
	printf("ingrese un valor entero positivo: ");
	scanf("%d", &v1);
		if(v1 > 0){
			for(int i=1; i<=v1; i++){
				printf("\n%d\n", i);
			}
		}else{
			printf("error, acaba de ingresar un numero no valido");
		}
	
}




// funcion principal
int main(int argc, char *argv[]) {
	
	positivo();
	
	return 0;
}

