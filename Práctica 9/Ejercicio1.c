/* Ejercicio 1 de la práctica 8. Rafael Herrero Álvarez */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int numeros(int ct);	/*Declaro las funciones */
int par(int y, int x[]); 

int main (void){
int cantidad;

   printf ("Introduzca el número de números que va a introducir: ");
   scanf ("%d", &cantidad);	/* Pido al usuario que introduzca la cantidad de números que va a utilizar */
numeros (cantidad);
printf ("Se han introducido %d números.\n", cantidad);
}

int numeros(int ct){ /*Función para recoger los número*/
  int i;
int num[ct];

for (i=0; i<ct; i++){ /*Bucle para recoger los números*/
   printf ("Introduzca el número %d: ", i+1);
   scanf ("%d", &num[i]);
}
par (ct, num);	/*Llamo a la otra función para que se ejecute*/
return 0;
}

int par(int y, int x[]){ /*Función para calcular pares e impares*/
int i;	/*Declaro todas las variables a utilizar*/
int contadorpar=0;
int contadorimpar=0;
int par[y];
int impar[y];
for (i=0; i<y; i++){ /*Con un bucle analizo que números son pares y cuales impares a través de su módulo*/
if (x[i]%2 == 0){
contadorpar++;
par[i] = x[i];
}
else{
contadorimpar++;
impar[i] = x[i];
}
}
if (contadorpar == 1){	/*Imprimo por pantalla la cantidad de números pares*/
printf ("Se ha introducido 1 número par.\n");
}
else{
printf ("Se han introducido %d números pares.\n", contadorpar);
}
return 0;
}
