/* Ejercicio 8 de Rafa y David para imprimir en la pantalla el carácter siguiente de la codificación ASCII */
#include <stdio.h>

char caracter;

int main (void){
	printf ("Este programa le permitirá obtener el carácter siguiente en la codificación ASCII.\n");
	printf ("Para terminar introduzca '*'.\n");
	
	char salida = '*';

	printf ("Introduzca su carácter: ");
	scanf ("%c", &caracter);
        printf ("El carácter siguiente al introducido es: %c\n", caracter+1);

	while (caracter != salida){
	printf ("Introduzca su carácter: ");
	scanf ("%c", &caracter);
	printf ("El carácter siguiente al introducido es: %c\n", caracter+1);
	} 
	
}
