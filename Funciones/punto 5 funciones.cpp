/*
PROGRAMA: funcion nombrada tiempo que tenga un parametro entero 
llamdo segtotal y tres parametros de referencia, convertir los 
segundo en HORAS MIN Y SEG.
FECHA: 10 de Septiembre del 2018
ELABORADO POR: Sergio Arias Rendon
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Prototipo
void tiempo(int segtotal, int &hor, int &min, int &seg);

//Funcion para determinar las horas minutos y segundos
void tiempo(int segtotal, int &hor, int &min, int &seg){
	hor = (segtotal / 3600);
	min = ((segtotal - hor * 3600)/ 60);
	seg = segtotal - (hor * 3600 + min * 60);		
}

//Funcion principal
int main(int argc, char *argv[]) {
	//Variables declaradas 
	int segundos, hor = 0, min = 0, seg = 0;
	//dato pedido al usuario 
	printf("Ingrese los segundos: ");
	scanf("%d", &segundos);
	tiempo(segundos, hor, min, seg);
	//mensajes a mostrar en pantalla con el resultado 
	printf("Los segundos que ingresaste equivalen a:\n%d Horas %d Minutos %d Segundos", hor, min, seg);
	getch();
	return 0;
}
