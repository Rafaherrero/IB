/* Ejercicio 3 de la práctica 8. Rafael Herrero Álvarez */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TCONTI 8 
#define NCONTI 5

typedef struct { /*Declaro las estructuras que me harán falta*/
char nombre[TCONTI]; 
long int num_habit;
long int num_paises;
} Tcontinente;

typedef struct{
char nombrepais[100];
long int numerohab;
int indice;
} Tpais;

int paises(int c); 	/*Declaro a las funciones que utilizaré*/

int main (){
int cantidad;
Tcontinente continentes[NCONTI] = {{"Africa", 1000000000, 54}, {"America", 1234520780, 35}, {"Asia", 4140000000, 48}, {"Europa", 739000000, 50}, {"Oceania", 34300000, 14}};

printf ("Introduzca el número de países que va a utilizar: "); /*Una vez almacenados las característica de cada continente,
pido al usuario que introduzca el número de países que se quiere estudiar*/
scanf ("%d", &cantidad);
paises(cantidad);
}

int paises(int c){ /*Con esta función almaceno todos los datos*/
int i;
Tpais datospaises[c];

for (i=0; i<c; i++){
printf ("Introduzca los datos del país %d:\n", i+1);
printf (" - Nombre: ");
scanf ("%s", &datospaises[i].nombrepais[0]);
printf (" - Número de habitantes: ");
scanf ("%ld", &datospaises[i].numerohab);
printf (" - Índice del continente. 0 = África, 1 = América, 2 = Asia, 3 = Europa, 4 = Oceanía: ");
scanf ("%d", &datospaises[i].indice);
}
return 0;
}

