/*
PROGRAMA:  funcion que acepte dos numeros en punto flotante, 
los multiplique y muestre su resultado en la pantalla
FECHA:  10 de Septiembre del 2018
ELABORADO POR: Sergio Arias Rendon
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Prototipo
float mult(float n1, float n2);

//Funcion que multiplica 2 numeros

float mult(float n1, float n2){
	float resul;
	resul = n1 * n2;
	return resul;
	
}

//Funcion principal
int main(int argc, char *argv[]) {
	//Variables declaradas
	float n1, n2, resultado;
	//Datos a pedir al usuario
	printf("Ingrese su primer numero: ");
	scanf("%f", &n1);
	printf("Ingrese su segundo numero: ");
	scanf("%f", &n2);
	resultado = mult(n1, n2);
	//Mensaje  con el resultado esperado 
	printf("La multiplicacion es de: %.2f", resultado);
	getch();
	return 0;
}
