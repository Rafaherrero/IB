/* Ejercicio 2 de la práctica 7 sobre las fechas de nacimiento */
#include <stdio.h>
#include <string.h>
#define PERSONAS 4

typedef struct{
int dia;
char mes[11];
char anio[5];
}Tfechas;

Tfechas nacimiento[PERSONAS];

int main (void){

char meses[][36] = {"Enero", "enero", "ENERO", "Febrero", "febrero", "FEBRERO", "Marzo", "marzo", "MARZO", "Abril", "abril", "ABRIL", "Mayo", "mayo", "MAYO", "Junio", "junio", "JUNIO", "Julio", "julio", "JULIO", "Agosto", "agosto", "AGOSTO", "Septiembre", "septiembre", "SEPTIEMBRE", "Octubre", "octubre", "OCTUBRE", "Noviembre", "noviembre", "NOVIEMBRE", "Diciembre", "diciembre", "DICIEMBRE"};
char mayoranio[4] = {"1992"};
	printf ("Introduce el día de nacimiento de la primera persona: ");
	scanf ("%d", &nacimiento[0].dia);
	printf ("Introduce el mes de nacimiento de la primera persona con caracteres: ");
	scanf ("%s", &nacimiento[0].mes[0]);
	printf ("Introduce el año de nacimiento de la primera persona: ");
	scanf ("%s", &nacimiento[0].anio[0]);
	
	printf ("Introduce el día de nacimiento de la segunda persona: ");
	scanf ("%d", &nacimiento[1].dia);
	printf ("Introduce el mes de nacimiento de la segunda persona con caracteres: ");
	scanf ("%s", &nacimiento[1].mes[0]);
	printf ("Introduce el año de nacimiento de la segunda persona: ");
	scanf ("%s", &nacimiento[1].anio[0]);

	printf ("Introduce el día de nacimiento de la tercera persona: ");
	scanf ("%d", &nacimiento[2].dia);
	printf ("Introduce el mes de nacimiento de la tercera persona con caracteres: ");
	scanf ("%s", &nacimiento[2].mes[0]);
	printf ("Introduce el año de nacimiento de la tercera persona: ");
	scanf ("%s", &nacimiento[2].anio[0]);

	printf ("Introduce el día de nacimiento de la cuarta persona: ");
	scanf ("%d", &nacimiento[3].dia);
	printf ("Introduce el mes de nacimiento de la cuarta persona con caracteres: ");
	scanf ("%s", &nacimiento[3].mes[0]);
	printf ("Introduce el año de nacimiento de la cuarta persona: ");
	scanf ("%s", &nacimiento[3].anio[0]);
	
	if (((strcmp(&nacimiento[0].mes[0], meses[0]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[1]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[2]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[6]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[7]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[8]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[12]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[13]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[14]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[18]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[19]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[20]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[21]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[22]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[23]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[27]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[28]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[29]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[33]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[34]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[35]) == 0))){
	printf ("La fecha de nacimiento de la primera persona es %d de %s de %s\n", nacimiento[0].dia, &nacimiento[0].mes[0], &nacimiento[0].anio[0]);
	}
	else{
	if ((((strcmp(&nacimiento[0].mes[0], meses[3]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[4]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[5]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[9]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[10]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[11]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[15]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[16]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[17]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[24]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[25]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[26]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[30]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[31]) == 0)||(strcmp(&nacimiento[0].mes[0], meses[32]) == 0)))&&((strcmp(&nacimiento[0].anio[0], &mayoranio[0])>=0))){
	printf ("La fecha de nacimiento de la primera persona es %d de %s de %s\n", nacimiento[0].dia, &nacimiento[0].mes[0], &nacimiento[0].anio[0]);
	}
	}
	
	if (((strcmp(&nacimiento[1].mes[0], meses[0]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[1]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[2]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[6]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[7]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[8]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[12]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[13]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[14]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[18]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[19]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[20]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[21]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[22]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[23]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[27]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[28]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[29]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[33]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[34]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[35]) == 0))){
	printf ("La fecha de nacimiento de la segunda persona es %d de %s de %s\n", nacimiento[1].dia, &nacimiento[1].mes[0], &nacimiento[1].anio[0]);
	}
	else{
	if ((((strcmp(&nacimiento[1].mes[0], meses[3]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[4]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[5]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[9]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[10]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[11]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[15]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[16]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[17]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[24]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[25]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[26]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[30]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[31]) == 0)||(strcmp(&nacimiento[1].mes[0], meses[32]) == 0)))&&((strcmp(&nacimiento[1].anio[0], &mayoranio[0])>=0))){
	printf ("La fecha de nacimiento de la segunda persona es %d de %s de %s\n", nacimiento[1].dia, &nacimiento[1].mes[0], &nacimiento[1].anio[0]);
	}
	}
	
	if (((strcmp(&nacimiento[2].mes[0], meses[0]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[1]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[2]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[6]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[7]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[8]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[12]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[13]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[14]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[18]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[19]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[20]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[21]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[22]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[23]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[27]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[28]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[29]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[33]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[34]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[35]) == 0))){
	printf ("La fecha de nacimiento de la tercera persona es %d de %s de %s\n", nacimiento[2].dia, &nacimiento[2].mes[0], &nacimiento[2].anio[0]);
	}
	else{
	if ((((strcmp(&nacimiento[2].mes[0], meses[3]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[4]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[5]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[9]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[10]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[11]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[15]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[16]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[17]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[24]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[25]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[26]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[30]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[31]) == 0)||(strcmp(&nacimiento[2].mes[0], meses[32]) == 0)))&&((strcmp(&nacimiento[2].anio[0], &mayoranio[0])>=0))){
	printf ("La fecha de nacimiento de la tercera persona es %d de %s de %s\n", nacimiento[2].dia, &nacimiento[2].mes[0], &nacimiento[2].anio[0]);
	}
	}
	
	if (((strcmp(&nacimiento[3].mes[0], meses[0]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[1]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[2]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[6]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[7]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[8]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[12]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[13]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[14]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[18]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[19]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[20]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[21]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[22]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[23]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[27]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[28]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[29]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[33]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[34]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[35]) == 0))){
	printf ("La fecha de nacimiento de la cuarta persona es %d de %s de %s\n", nacimiento[3].dia, &nacimiento[3].mes[0], &nacimiento[3].anio[0]);
	}
	else{	
	if ((((strcmp(&nacimiento[3].mes[0], meses[3]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[4]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[5]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[9]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[10]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[11]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[15]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[16]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[17]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[24]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[25]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[26]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[30]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[31]) == 0)||(strcmp(&nacimiento[3].mes[0], meses[32]) == 0)))&&((strcmp(&nacimiento[3].anio[0], &mayoranio[0])>=0))){
	printf ("La fecha de nacimiento de la cuarta persona es %d de %s de %s\n", nacimiento[3].dia, &nacimiento[3].mes[0], &nacimiento[3].anio[0]);
	}
	}
}