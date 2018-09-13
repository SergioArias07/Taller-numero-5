/*
PROGRAMA: devolver la cantidad de nombres que tiene un nombre ingresado
FECHA: 11 de Septiembre del 2018
ELABORADO POR: Sergio Arias Rendon
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Prototipo
void vocales(char nom[15]);

//Funcion vocales
void vocales(char nom[15]){
	//variables 
	int i, c=0;
	for(i = 0; i<15; i++){
		switch(nom[i]){
		case 'a': c++;
		break;
		case 'e': c++;
		break;
		case 'i': c++;
		break;
		case 'o': c++;
		break;
		case 'u': c++;
		break;
		case 'A': c++;
		break;
		case 'E': c++;
		break;
		case 'I': c++;
		break;
		case 'O': c++;
		break;
		case 'U': c++;
		break;
		} 
	}
	//mensaje con el total de vocales que tiene el nombre 
	printf("EL total de las vocales en el nombre es: %d", c);
	getch();
}

//Funcion principal
int main() {
	
	char nom[15];
	//pedir nombre al usuario 
	printf("Ingrese cualquier nombre: ");
	gets(nom);
	vocales(nom);
	
	return 0;
}
