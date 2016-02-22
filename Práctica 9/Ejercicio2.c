/* Ejercicio 2 de la práctica 8. Rafael Herrero Álvarez */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZEMESES 11 
#define NMESES 12

char meses[NMESES][SIZEMESES] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};
int fechas(int w);
int escrito(int p, int x[], int y[], int z[]);	/*Declaro todas las funciones que voy a utilizar*/
int mayormenor (int t, int a[], int b[], int c[]);

int main (){
int pers;
printf ("Introduzca el número de personas que va a utilizar: "); /*Pido el número de personas a estudiar*/
scanf ("%d", &pers);
fechas(pers);
}

int fechas (int w){ /*Con esta función recojo los datos de nacimiento de las personas*/
int dia[w];
int mes[w];
int anio[w];
int i;

for (i=0; i<w; i++){
printf ("Introduzca el día de nacimiento de la persona %d: ", i+1);
scanf ("%d", &dia[i]);
printf ("Introduzca el mes de nacimiento de la persona %d: ", i+1);
scanf ("%d", &mes[i]);
printf ("Introduzca el año de nacimiento de la persona %d: ", i+1);
scanf ("%d", &anio[i]);
}

escrito(w, dia, mes, anio); /*Llamo a ejecutar a la otra función*/
return 0;
}

int escrito (int p, int x[], int y[], int z[]){ /*Con esta función muestro por pantalla la fecha de nacimiento de las personas
a través de un bucle, y convirtiendo el mes de números a letras*/
int j;
int i;

for (j=0; j<p; j++){
for (i=0; i<14; i++){
if (y[j] == i){
printf ("La persona %d nació el %d de %s de %d\n", j+1, x[j], &meses[i-2][SIZEMESES], z[j]);
}
}
}
mayormenor(p, x, y, z); /*Llamo a ejecutar a la otra función*/
return 0;
}

int mayormenor (int t, int a[], int b[], int c[]){ /*Con esta función calculo y muestro por pantalla cuales de las personas
introducidas es la mayor o la menor respecto a su año de nacimiento*/
int mayor = 0; 
int menor = 123456789;
int i;
int j;
int d;
int e;

for (i=0; i<t; i++){
if (c[i] > mayor){
mayor = c[i];
e = i+1;
}
if (c[i] < menor){
menor = c[i];
d = i+1;
}
}
printf ("La persona más mayor es la número %d que nació en %d\n", d, menor);
printf ("La persona más joven es la número %d que nació en %d\n", e, mayor);

return 0;
}

