/*
PROGRAMA: funcion que recibe tres numeros enteros y muestra cual es el mayor de ellos
FECHA: Sergio Arias Rendon
ELABORADO POR: 10 de Septiembre del 2018
*/
#include <stdio.h>
#include <conio.h>
// sentencia if para determinar el mayor 
void mayor (int n1, int n2, int n3){
	if (n1 > n2 and n1 > n3){
		printf ("el mayor es: %d", n1);
    }
	if (n2 > n1  and n2 > n3){
		printf ("el mayor es: %d", n2);
	}
	if (n3 > n1 and n3 > n2){
		printf ("El numero mayor es: %d", n3);
	}
}
// Funcion principal
int main(){
	// variables declaradas 
	int v1, v2, v3;
	// Datos a pedir a el usuario
	printf("ingrese su primer numero\n");
	scanf ("%d", &v1);
	printf("ingrese su segundo numero\n");
	scanf ("%d", &v2);
	printf("ingrese su tercer numero\n");
	scanf ("%d", &v3);
	
	mayor(v1,v2,v3);
	
	return 0;
}
