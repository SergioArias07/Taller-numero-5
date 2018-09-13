/*
PROGRAMA: Funcion que reciba un parametro como caracter 
y mostra en pantalla si es o no Vocal
FECHA: 10 de Septiembre del 2018
ELABORADO POR: Sergio Arias Rendon
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Prototipo
void letra(char l);

//Funcion principal
int main() {
	//Variable declarada 
	char l;
	printf("Ingrese un caracter: ");
	scanf("%c", &l);
	letra(l);
	return 0;
}

void letra(char l){
	//Funcion if comparando si es vocal o no y mostra el resultado 
	if(l == 'a' || l == 'e' || l == 'i' || l == 'o'|| l == 'u' || 
	   l == 'A'	|| l == 'E' || l == 'I'|| l == 'O' || l == 'U'){
		printf("Es una vocal");		
	}else{
		printf("No es una vocal");
	}
	getch();
}
