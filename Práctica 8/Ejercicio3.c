/* Ejercicio 3 de la práctica 8. Rafael Herrero Álvarez.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define PAISES 3 /*Declaro el numero de paises y de continentes, estos ultimos fijado en el PDF*/
#define TCONTI 8

typedef struct{
char nombrepais[100];
long int numerodehabitantes;
long int pib;
char numcont[1];

struct{
char moneda[30];
float cambio;
}infomon;

}Continentes;

Continentes paises[PAISES];

int main (void){

char nomb_cont[][TCONTI] = {"Africa", "America", "Asia", "Europa", "Oceania"};
char numcontinente[][5] = {"0", "1", "2", "3", "4"};
char dolar[][1] = {"1"};
char dolars[][6] = {"Dolar"};
int i = 0;
int contadorpib = 0;
int contadordolar = 0;
long int dolares[PAISES] = {'0', '0', '0'};
long int mediahab = 0;														/*Declaro todas las variables que me piden en el problema*/
long int pibafrica[PAISES] = {'0', '0', '0'};
long int pibasia[PAISES] = {'0', '0', '0'};
long int piboceania[PAISES] = {'0', '0', '0'};
long int ratiopib = 0;
long int habafrica[PAISES] = {'0', '0', '0'};
long int habasia[PAISES] = {'0', '0', '0'};
long int haboceania[PAISES] = {'0', '0', '0'};

for (i = 0; i < PAISES; i++){											/* Hago un bucle para todos los países, desde el 0 hasta el 2, ya que solo nos piden 3. Se pide el nombre, numero de habitantes, moneda, 
																		cambio de esa moneda respecto al dólar, el pib del pais, y un indicador de continente */
	printf ("Introduce el nombre del país %d: ", i+1);
	scanf ("%s", &paises[i].nombrepais[0]);
	printf ("Introduce el número de habitantes del país %d: ", i+1);
	scanf ("%ld", &paises[i].numerodehabitantes);
	printf ("Introduce la moneda del país %d: ", i+1);
	scanf ("%s", &paises[i].infomon.moneda[0]);
	printf ("Introduce el valor de cambio de la moneda del país %d respecto al dólar. Si es el dólar, escriba '1': ", i+1);
	scanf ("%f", &paises[i].infomon.cambio);
	printf ("Introduce el PIB del país %d en la moneda del país: ", i+1);
	scanf ("%ld", &paises[i].pib);
	printf ("Introduce un indicador de continente para el país %d. 0 = Africa, 1 = América, 2 = Asia, 3 = Europa, 4 = Oceanía.: ", i+1);
	scanf ("%s", &paises[i].numcont[0]);
}

for (i = 0; i < PAISES; i++){ 											/* Muestro por pantalla los datos de todos los países */
	printf ("\nDatos del país %d:\n", i+1);
	printf ("- Nombre del país: %s\n", &paises[i].nombrepais[0]);
	printf ("- Número de habitantes del país: %ld\n", paises[i].numerodehabitantes);
	printf ("- La moneda del país es: %s\n", &paises[i].infomon.moneda[0]);
	printf ("- El valor de cambio de la moneda en dólares es de %f por cada %s\n", paises[i].infomon.cambio, &paises[i].infomon.moneda[0]);
	printf ("- El Producto Interior Bruto del país es de: %ld\n", paises[i].pib);	
																		/* Separo cada uno de los países según el continente, y dependiendo de a cual pertenezca, calculo su ratio pib, su media
																		de habitantes, y los separo según usen el dólar o no */
	if (strcmp(&paises[i].numcont[0], numcontinente[0])==0){			
	printf ("- El país se encuentra en %s", nomb_cont[0]);
	contadorpib++;
	pibafrica[i] = (paises[i].pib*paises[i].infomon.cambio);
	habafrica[i] = paises[i].numerodehabitantes;
	}
	if (strcmp(&paises[i].numcont[0], numcontinente[1])==0){
	printf ("- El país se encuentra en %s", nomb_cont[1]);
	}
	if (strcmp(&paises[i].numcont[0], numcontinente[2])==0){
	printf ("- El país se encuentra en %s", nomb_cont[2]);
	contadorpib++;
	pibasia[i] = (paises[i].pib*paises[i].infomon.cambio);
	habasia[i] = paises[i].numerodehabitantes;
	}
	if (strcmp(&paises[i].numcont[0], numcontinente[3])==0){
	printf ("- El país se encuentra en %s", nomb_cont[3]);
	}
	if (strcmp(&paises[i].numcont[0], numcontinente[4])==0){
	printf ("- El país se encuentra en %s", nomb_cont[4]);
	contadorpib++;
	piboceania[i] = (paises[i].pib*paises[i].infomon.cambio);
	haboceania[i] = paises[i].numerodehabitantes;
	}
	if (strcmp(&paises[i].infomon.moneda[0], dolars[0])==0){
	contadordolar++;
	dolares[i] = paises[i].numerodehabitantes;
	}
}
																			/*Una vez hecha la criba del proceso anterior, miro si se han introducido o no países con el dólar o en Africa, o Asia u Oceanía.
																			De ser así, muestro en pantalla los datos que me han pedido en el problema */
	if(contadordolar == 0){
	printf ("\nNo se ha introducido ningún país con el dólar como moneda.\n");
	}
	else{
	mediahab = ((dolares[0]+dolares[1]+dolares[2])/contadordolar);
	printf ("\nLa media de habitantes en los países en los que se usa el dolar es de %ld habitantes.\n", mediahab);
	}

	if(contadorpib == 0){
	printf ("No se ha introducido ningún país en África, o Asia, u Oceanía\n");
	}
	else{
	ratiopib = (pibasia[0]+pibafrica[0]+piboceania[0]+pibasia[1]+pibafrica[1]+piboceania[1]+pibasia[2]+pibafrica[2]+piboceania[2])/(habafrica[0]+habafrica[1]+habafrica[2]+habasia[0]+habasia[1]+habasia[2]+haboceania[0]+haboceania[1]+haboceania[2]);
	printf ("El ratio PIB por habitante para el global de todos los países introducidos ubicados en África y/o Asia y/u Oceanía es de: %ld\n", ratiopib);
	}

}