/* Ejercicio para calcular la cantidad de números pares e impares introducidos */
#include <stdio.h>
#define CANT 5
int numero[CANT];
int cuentaimpar;
int cuentapar;
int paroimpar[CANT];

int main (void) {
	printf ("Introduzca el primer número: ");
	scanf ("%d", &numero[0]);
	paroimpar[0] = numero[0]%2;
        cuentaimpar=(cuentaimpar+(numero[0]%2));

	printf ("Introduzca el segundo número: ");
	scanf ("%d", &numero[1]);
	paroimpar[1] = numero[1]%2;
        cuentaimpar=(cuentaimpar+(numero[1]%2));

	printf ("Introduzca el tercer número: ");
	scanf ("%d", &numero[2]);
	paroimpar[2] = numero[2]%2;
        cuentaimpar=(cuentaimpar+(numero[2]%2));

	printf ("Introduzca el cuarto número: ");
	scanf ("%d", &numero[3]);
	paroimpar[3] = numero[3]%2;
        cuentaimpar=(cuentaimpar+(numero[3]%2));

	printf ("Introduzca el quinto número: ");
	scanf ("%d", &numero[4]);
	paroimpar[4] = numero[4]%2;
        cuentaimpar=(cuentaimpar+(numero[4]%2));

        if (paroimpar[0] == 0)
	printf ("El primer numero es par\n");
        else
	printf ("El primer numero es impar\n");
        
        if (paroimpar[1] == 0)
	printf ("El segundo numero es par\n");
        else
	printf ("El segundo numero es impar\n");
        
        if (paroimpar[2] == 0)
	printf ("El tercer numero es par\n");
        else
	printf ("El tercer numero es impar\n");
        
        if (paroimpar[3] == 0)
	printf ("El cuarto numero es par\n");
        else
	printf ("El cuarto numero es impar\n");
        
        if (paroimpar[4] == 0)
	printf ("El quinto numero es par\n");
        else
	printf ("El quinto numero es impar\n");
        
        cuentapar=(CANT-cuentaimpar);
        printf ("La cantidad de números impares es %d\n", cuentaimpar);
	printf ("La cantidad de números pares es %d\n", cuentapar);
        
	return (0);
}