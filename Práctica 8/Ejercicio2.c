/* Ejercicio 2 de la práctica 8. Rafael Herrero Álvarez.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define PERSONAS 4

/*Declaro todas las variables que me harán falta, así como la estructura en la que almacenaré los datos de cada persona*/ 

typedef struct{
int dia;
char mes[11];
int anio;
int diasmes;
int dia31;
}Tfechas;

Tfechas nacimiento[PERSONAS];

int main (void){
char meses[][12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
int mayor;

int i = 0;
	for (i = 0; i < PERSONAS; i++){											/*Pido al usuario que introduzca las fechas de nacimiento de las cuatro personas mediante un bucle*/
	printf ("Introduzca el día de nacimiento de la persona %d: ", i+1);
	scanf ("%d", &nacimiento[i].dia);
	printf ("Introduzca el mes de nacimiento de la persona %d: ", i+1);
	scanf ("%s", &nacimiento[i].mes[0]);
	printf ("Introduzca el año de nacimiento de la persona %d: ", i+1);
	scanf ("%d", &nacimiento[i].anio);
	
	if ((strcmp(&nacimiento[i].mes[0], meses[1]) == 0)||(strcmp(&nacimiento[i].mes[0], meses[3]) == 0)||(strcmp(&nacimiento[i].mes[0], meses[5]) == 0)||(strcmp(&nacimiento[i].mes[0], meses[8]) == 0)||(strcmp(&nacimiento[i].mes[0], meses[10]) == 0)){
	nacimiento[i].diasmes = 0;
	}																		/*Distingo que meses tienen 30 días, y cuáles 31*/
	else{
	nacimiento[i].diasmes = 1;
	}
}
	for (i = 0; i < PERSONAS; i++){											/*Muestro en pantalla aquellas fechas con meses de 30 días y mayores de 1992*/
	if ((nacimiento[i].diasmes == 0) && (nacimiento[i].anio >= 1992)){
	printf ("La fecha de nacimiento de la persona %d es %d de %s de %d\n", i+1, nacimiento[i].dia, &nacimiento[i].mes[0], nacimiento[i].anio);
	}
	
}	

/*Ahora comienzo a distinguir entre las fechas con meses de 31 días cuál es mayor y cuál es menor para finalmente mostrar solamente estas dos fechas*/

	if ((nacimiento[0].diasmes == 1) && (nacimiento[0].dia > (nacimiento[1].dia && nacimiento[1].diasmes == 1)) && (nacimiento[0].dia > (nacimiento[2].dia && nacimiento[2].diasmes == 1)) && (nacimiento[0].dia > (nacimiento[3].dia && nacimiento[3].diasmes == 1))){
	printf ("La fecha de nacimiento de la persona 1 es %d de %s de %d\n", nacimiento[0].dia, &nacimiento[0].mes[0], nacimiento[0].anio);
	}
	else
	if ((nacimiento[1].diasmes == 1) && (nacimiento[1].dia > (nacimiento[0].dia && nacimiento[0].diasmes == 1)) && (nacimiento[1].dia > (nacimiento[2].dia && nacimiento[2].diasmes == 1)) && (nacimiento[1].dia > (nacimiento[3].dia && nacimiento[3].diasmes == 1))){
	printf ("La fecha de nacimiento de la persona 2 es %d de %s de %d\n", nacimiento[1].dia, &nacimiento[1].mes[0], nacimiento[1].anio);
	}
	else
	if ((nacimiento[2].diasmes == 1) && (nacimiento[2].dia > (nacimiento[0].dia && nacimiento[0].diasmes == 1)) && (nacimiento[2].dia > (nacimiento[1].dia && nacimiento[1].diasmes == 1)) && (nacimiento[2].dia > (nacimiento[3].dia && nacimiento[3].diasmes == 1))){
	printf ("La fecha de nacimiento de la persona 3 es %d de %s de %d\n", nacimiento[2].dia, &nacimiento[2].mes[0], nacimiento[2].anio);
	}
	else
	if ((nacimiento[3].diasmes == 1) && (nacimiento[3].dia > (nacimiento[0].dia && nacimiento[0].diasmes == 1)) && (nacimiento[3].dia > (nacimiento[1].dia && nacimiento[1].diasmes == 1)) && (nacimiento[3].dia > (nacimiento[2].dia && nacimiento[2].diasmes == 1))){
	printf ("La fecha de nacimiento de la persona 4 es %d de %s de %d\n", nacimiento[3].dia, &nacimiento[3].mes[0], nacimiento[3].anio);
}

	if ((nacimiento[0].diasmes == 1) && (nacimiento[0].dia < (nacimiento[1].dia && nacimiento[1].diasmes == 1)) && (nacimiento[0].dia < (nacimiento[2].dia && nacimiento[2].diasmes == 1)) && (nacimiento[0].dia < (nacimiento[3].dia && nacimiento[3].diasmes == 1))){
	printf ("La fecha de nacimiento de la persona 1 es %d de %s de %d\n", nacimiento[0].dia, &nacimiento[0].mes[0], nacimiento[0].anio);
	}
	else
	if ((nacimiento[1].diasmes == 1) && (nacimiento[1].dia < (nacimiento[0].dia && nacimiento[0].diasmes == 1)) && (nacimiento[1].dia < (nacimiento[2].dia && nacimiento[2].diasmes == 1)) && (nacimiento[1].dia < (nacimiento[3].dia && nacimiento[3].diasmes == 1))){
	printf ("La fecha de nacimiento de la persona 2 es %d de %s de %d\n", nacimiento[1].dia, &nacimiento[1].mes[0], nacimiento[1].anio);
	}
	else
	if ((nacimiento[2].diasmes == 1) && (nacimiento[2].dia < (nacimiento[0].dia && nacimiento[0].diasmes == 1)) && (nacimiento[2].dia < (nacimiento[1].dia && nacimiento[1].diasmes == 1)) && (nacimiento[2].dia < (nacimiento[3].dia && nacimiento[3].diasmes == 1))){
	printf ("La fecha de nacimiento de la persona 3 es %d de %s de %d\n", nacimiento[2].dia, &nacimiento[2].mes[0], nacimiento[2].anio);
	}
	else 
	if ((nacimiento[3].diasmes == 1) && (nacimiento[3].dia < (nacimiento[0].dia && nacimiento[0].diasmes == 1)) && (nacimiento[3].dia < (nacimiento[1].dia && nacimiento[1].diasmes == 1)) && (nacimiento[3].dia < (nacimiento[2].dia && nacimiento[2].diasmes == 1))){
	printf ("La fecha de nacimiento de la persona 4 es %d de %s de %d\n", nacimiento[3].dia, &nacimiento[3].mes[0], nacimiento[3].anio);
	}
}










