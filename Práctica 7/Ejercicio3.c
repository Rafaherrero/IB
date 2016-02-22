/* Ejercicio 3 de la práctica 7 sobre datos de distintos países */
#include <stdio.h>
#include <string.h>
#define TCONTI 8
#define PAISES 3

typedef struct{
char nombrepais[100];
float numerodehabitantes;
float pib;
char numcont[2];

struct{
char moneda[30];
float cambio;
}infomon;

}Continentes;

Continentes paises[PAISES];

int main (void){

char nomb_cont[][TCONTI] = {"Africa", "America", "Asia", "Europa", "Oceania"};
char numcontinente[][5] = {"0", "1", "2", "3", "4"};
char dolar[][2] = {"1"};
float mediahab;
int contadordolar;
float pibasia[PAISES];
float pibafrica[PAISES];
float piboceania[PAISES];
int contadorpib;
float ratiopib;
int dolaruno;
int dolardos;
int dolartres;
float habuno[PAISES];
float habdos[PAISES];
float habtres[PAISES];

	printf ("Introduce el nombre del primer país: ");
	scanf ("%s", &paises[0].nombrepais[0]);
	printf ("Introduce el número de habitantes del primer país: ");
	scanf ("%f", &paises[0].numerodehabitantes);
	printf ("Introduce la moneda del primer país: ");
	scanf ("%s", &paises[0].infomon.moneda[0]);
	printf ("Introduce el valor de cambio de la moneda del primer país respecto al dólar. Si es el dólar, pulse 1: ");
	scanf ("%f", &paises[0].infomon.cambio);
	printf ("Introduce el PIB del primer país en la moneda del país: ");
	scanf ("%f", &paises[0].pib);
	printf ("Introduce un indicador de continente para este país. 0 = Africa, 1 = América, 2 = Asia, 3 = Europa, 4 = Oceanía.: ");
	scanf ("%s", &paises[0].numcont[0]);
	
	printf ("Introduce el nombre del segundo país: ");
	scanf ("%s", &paises[1].nombrepais[0]);
	printf ("Introduce el número de habitantes del segundo país: ");
	scanf ("%f", &paises[1].numerodehabitantes);
	printf ("Introduce la moneda del segundo país: ");
	scanf ("%s", &paises[1].infomon.moneda[0]);
	printf ("Introduce el valor de cambio de la moneda del segundo país respecto al dólar. Si es el dólar, pulse 1: ");
	scanf ("%f", &paises[1].infomon.cambio);
	printf ("Introduce el PIB del segundo país en la moneda del país: ");
	scanf ("%f", &paises[1].pib);
	printf ("Introduce un indicador de continente para este país. 0 = Africa, 1 = América, 2 = Asia, 3 = Europa, 4 = Oceanía.: ");
	scanf ("%s", &paises[1].numcont[0]);
	
	printf ("Introduce el nombre del tercer país: ");
	scanf ("%s", &paises[2].nombrepais[0]);
	printf ("Introduce el número de habitantes del tercer país: ");
	scanf ("%f", &paises[2].numerodehabitantes);
	printf ("Introduce la moneda del tercer país: ");
	scanf ("%s", &paises[2].infomon.moneda[0]);
	printf ("Introduce el valor de cambio de la moneda del tercer país respecto al dólar. Si es el dólar, pulse 1: ");
	scanf ("%f", &paises[2].infomon.cambio);
	printf ("Introduce el PIB del tercer país en la moneda del país: ");
	scanf ("%f", &paises[2].pib);
	printf ("Introduce un indicador de continente para este país. 0 = Africa, 1 = América, 2 = Asia, 3 = Europa, 4 = Oceanía.: ");
	scanf ("%s", &paises[2].numcont[0]);

	mediahab = (paises[0].numerodehabitantes + paises[1].numerodehabitantes + paises[2].numerodehabitantes)/3;
	
	printf ("\nDatos del primer país:\n");
	printf ("- Nombre del país: %s\n", &paises[0].nombrepais[0]);
	printf ("- Número de habitantes del país: %f\n", paises[0].numerodehabitantes);
	printf ("- La moneda del país es: %s\n", &paises[0].infomon.moneda[0]);
	printf ("- El valor de cambio de la moneda en dólares es de %f por cada %s\n", paises[0].infomon.cambio, &paises[0].infomon.moneda[0]);
	printf ("- El Producto Interior Bruto del país es de: %f\n", paises[0].pib);
	if (strcmp(&paises[0].numcont[0], numcontinente[0])==0){
	printf ("- El país se encuentra en %s", nomb_cont[0]);
	pibafrica[0] = (paises[0].pib*paises[0].infomon.cambio);
	contadorpib++;
	paises[0].numerodehabitantes = habuno[0];
	}
	if (strcmp(&paises[0].numcont[0], numcontinente[1])==0){
	printf ("- El país se encuentra en %s", nomb_cont[1]);
	}
	if (strcmp(&paises[0].numcont[0], numcontinente[2])==0){
	printf ("- El país se encuentra en %s", nomb_cont[2]);
	pibasia[0] = (paises[0].pib*paises[0].infomon.cambio);
	contadorpib++;
	paises[0].numerodehabitantes = habuno[1];
	}
	if (strcmp(&paises[0].numcont[0], numcontinente[3])==0){
	printf ("- El país se encuentra en %s", nomb_cont[3]);
	}
	if (strcmp(&paises[0].numcont[0], numcontinente[4])==0){
	printf ("- El país se encuentra en %s", nomb_cont[4]);
	piboceania[0] = (paises[0].pib*paises[0].infomon.cambio);
	contadorpib++;
	paises[0].numerodehabitantes = habuno[2];
	}
	if (paises[0].infomon.cambio == 1.0000){
	contadordolar++;
	paises[0].numerodehabitantes = dolaruno;
	}
	
	printf ("\n\nDatos del segundo país:\n");
	printf ("- Nombre del país: %s\n", &paises[1].nombrepais[0]);
	printf ("- Número de habitantes del país: %f\n", paises[1].numerodehabitantes);
	printf ("- La moneda del país es: %s\n", &paises[1].infomon.moneda[0]);
	printf ("- El valor de cambio de la moneda en dólares es de %f por cada %s\n", paises[1].infomon.cambio, &paises[0].infomon.moneda[0]);
	printf ("- El Producto Interior Bruto del país es de: %f\n", paises[1].pib);
	if (strcmp(&paises[1].numcont[0], numcontinente[0])==0){
	printf ("- El país se encuentra en %s", nomb_cont[0]);
	pibafrica[1] = (paises[1].pib*paises[1].infomon.cambio);
	contadorpib++;
	paises[1].numerodehabitantes = habdos[0];
	}
	if (strcmp(&paises[1].numcont[0], numcontinente[1])==0){
	printf ("- El país se encuentra en %s", nomb_cont[1]);
	}
	if (strcmp(&paises[1].numcont[0], numcontinente[2])==0){
	printf ("- El país se encuentra en %s", nomb_cont[2]);
	pibasia[1] = (paises[1].pib*paises[1].infomon.cambio);
	contadorpib++;
	paises[1].numerodehabitantes = habdos[1];
	}
	if (strcmp(&paises[1].numcont[0], numcontinente[3])==0){
	printf ("- El país se encuentra en %s", nomb_cont[3]);
	}
	if (strcmp(&paises[1].numcont[0], numcontinente[4])==0){
	printf ("- El país se encuentra en %s", nomb_cont[4]);
	piboceania[1] = (paises[1].pib*paises[1].infomon.cambio);
	contadorpib++;
	paises[1].numerodehabitantes = habdos[2];
	}
	if (paises[1].infomon.cambio == 1.0000){
	contadordolar++;
	paises[1].numerodehabitantes = dolardos;
	}
	
	printf ("\n\nDatos del tercer país:\n");
	printf ("- Nombre del país: %s\n", &paises[2].nombrepais[0]);
	printf ("- Número de habitantes del país: %f\n", paises[2].numerodehabitantes);
	printf ("- La moneda del país es: %s\n", &paises[2].infomon.moneda[0]);
	printf ("- El valor de cambio de la moneda en dólares es de %f por cada %s\n", paises[2].infomon.cambio, &paises[0].infomon.moneda[0]);
	printf ("- El Producto Interior Bruto del país es de: %f\n", paises[2].pib);
	if (strcmp(&paises[2].numcont[0], numcontinente[0])==0){
	printf ("- El país se encuentra en %s", nomb_cont[0]);
	pibafrica[2] = (paises[2].pib*paises[2].infomon.cambio);
	contadorpib++;
	paises[2].numerodehabitantes = habtres[0];
	}
	if (strcmp(&paises[2].numcont[0], numcontinente[1])==0){
	printf ("- El país se encuentra en %s", nomb_cont[1]);
	}
	if (strcmp(&paises[2].numcont[0], numcontinente[2])==0){
	printf ("- El país se encuentra en %s", nomb_cont[2]);
	pibasia[2] = (paises[2].pib*paises[2].infomon.cambio);
	contadorpib++;
	paises[2].numerodehabitantes = habtres[1];
	}
	if (strcmp(&paises[2].numcont[0], numcontinente[3])==0){
	printf ("- El país se encuentra en %s", nomb_cont[3]);
	}
	if (strcmp(&paises[2].numcont[0], numcontinente[4])==0){
	printf ("- El país se encuentra en %s", nomb_cont[4]);
	piboceania[2] = (paises[2].pib*paises[2].infomon.cambio);
	contadorpib++;
	paises[2].numerodehabitantes = habtres[2];
	}
	if (paises[2].infomon.cambio == 1.0000){
	contadordolar++;
	paises[2].numerodehabitantes = dolartres;
	}
	
	mediahab = (dolaruno + dolardos + dolartres)/contadordolar;
	
	if(contadordolar != 0){
	printf ("\n La media de habitantes en los países en los que se usa el dolar es de %f\n", mediahab);
	}
	
	ratiopib = (pibasia[0] + pibafrica[0] + piboceania[0] + pibasia[1] + pibafrica[1] + piboceania[1] + pibasia[2] + pibafrica[2] + piboceania[2])/(habuno[0]+habdos[0]+habtres[0]+habuno[1]+habdos[1]+habtres[1]+habuno[2]+habdos[2]+habtres[2]);
	
	if(contadorpib == 0){
	printf ("No se ha introducido ningún país en África, o Asia, u Oceanía\n");
	}
	else{
	printf ("El ratio PIB por habitante para el global de todos los países introducidos ubicados en África y/o Asia y/u Oceanía es de: %f\n", ratiopib);
	}
	
}	


