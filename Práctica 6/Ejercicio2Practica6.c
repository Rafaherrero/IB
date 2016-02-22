/* Ejercicio 2 de prácticas usando arrays para mostrar 4 fechas de cumpleaños */
#include <stdio.h>
#define PERSONAS 4
#define MES 11
int dia[PERSONAS];
int anio[PERSONAS];
char mes[PERSONAS][MES];

int main (void){
	printf ("Introduzca el día de nacimiento de la primera persona en números: ");
	scanf ("%d", &dia[0]);
	printf ("Introduzca el mes de nacimiento de la primera persona: ");
	scanf ("%s", &mes[0][0]);
	printf ("Introduzca el año de nacimiento de la primera persona en números: ");
	scanf ("%d", &anio[0]);	
	
	printf ("Introduzca el día de nacimiento de la segunda persona en números: ");
	scanf ("%d", &dia[1]);
	printf ("Introduzca el mes de nacimiento de la segunda persona: ");
	scanf ("%s", &mes[1][0]);
	printf ("Introduzca el año de nacimiento de la segunda persona en números: ");
	scanf ("%d", &anio[1]);
	
	printf ("Introduzca el día de nacimiento de la tercera persona en números: ");
	scanf ("%d", &dia[2]);
	printf ("Introduzca el mes de nacimiento de la tercera persona: ");
	scanf ("%s", &mes[2][0]);
	printf ("Introduzca el año de nacimiento de la tercera persona en números: ");
	scanf ("%d", &anio[2]);	
	
	printf ("Introduzca el día de nacimiento de la cuarta persona en números: ");
	scanf ("%d", &dia[3]);
	printf ("Introduzca el mes de nacimiento de la cuarta persona: ");
	scanf ("%s", &mes[3][0]);	
	printf ("Introduzca el año de nacimiento de la cuarta persona en números: ");
	scanf ("%d", &anio[3]);
	
	printf ("El mes de nacimiento de la primera persona es %s\n", mes[0]);
	printf ("El mes de nacimiento de la segunda persona es %s\n", mes[1]);
	printf ("El mes de nacimiento de la tercera persona es %s\n", mes[2]);
	printf ("El mes de nacimiento de la cuarta persona es %s\n", mes[3]);
	printf ("El año de nacimiento de la primera persona es %d\n", anio[0]);
	printf ("El año de nacimiento de la segunda persona es %d\n", anio[1]);
	printf ("El año de nacimiento de la tercera persona es %d\n", anio[2]);
	printf ("El año de nacimiento de la cuarta persona es %d\n", anio[3]);
	
	return 0;
}