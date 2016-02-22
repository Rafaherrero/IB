/* Ejercicio 1 de la práctica 8. Rafael Herrero Álvarez.*/
#include <stdio.h>
#include <string.h>
#define NUM 5

/*Declaro todas las variables, principalmente los contadores para saber la cantidad de números pares e impares*/

int contadorimpar = 0;
int contadorpar = 0;
int productoimpares = 1;
int numero[NUM];
int sumapar = 0;
int media = 0;
int i = 0;

int main (void){
	printf ("Este programa le permitirá calcular la suma y media de números pares, así como el producto y la cantidad de números negativos impares que introduzca.\n");
for (i = 0; i < NUM; i++){
	printf ("Introduce el número %d: ", i+1);
	scanf ("%d", &numero[i]);
	
	/*Separo el número según sea par o impar, así como calculo su suma si es par, y su producto si es impar*/
	
	if(numero[i]%2==0){
	sumapar = sumapar + numero[i];
	contadorpar++;
	}
	else{
	productoimpares = productoimpares * numero[i];
	if(numero[i]<0){
	contadorimpar++;
	}
}
}

/*Muestro en pantalla la media y suma de los números pares, así como el producto y la cantidad de números negativos impares introducidos*/

media = sumapar/contadorpar;
printf ("La suma de los números pares introducidos es: %d\n", sumapar);
printf ("La media de los números pares introducidos es: %d\n", media);
printf ("El producto de los números impares introducidos es: %d\n", productoimpares);
if(contadorimpar<2){
printf ("Se ha introducido %d número impar negativo\n", contadorimpar);
}
else{
printf ("Se han introducido %d números impares negativos\n", contadorimpar);
}
} 