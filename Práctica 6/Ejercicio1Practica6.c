/* Ejercicio para calcular la cantidad de números pares e impares introducidos */
#include <stdio.h>
#define CANT 5
int numero[CANT];
int cuentaimpar;
int cuentapar;

int main (void) {
	printf ("Introduzca el primer número: ");
	scanf ("%d", &numero[0]);
	cuentaimpar=(cuentaimpar+(numero[0]%2));

	printf ("Introduzca el segundo número: ");
	scanf ("%d", &numero[1]);
	cuentaimpar=(cuentaimpar+(numero[1]%2));

	printf ("Introduzca el tercer número: ");
	scanf ("%d", &numero[2]);
	cuentaimpar=(cuentaimpar+(numero[2]%2));

	printf ("Introduzca el cuarto número: ");
	scanf ("%d", &numero[3]);
	cuentaimpar=(cuentaimpar+(numero[3]%2));

	printf ("Introduzca el quinto número: ");
	scanf ("%d", &numero[4]);
	cuentaimpar=(cuentaimpar+(numero[4]%2));
	cuentapar=(CANT-cuentaimpar);


	printf ("La cantidad de números impares es %d\n", cuentaimpar);
	printf ("La cantidad de números pares es %d\n", cuentapar);
	return (0);
}