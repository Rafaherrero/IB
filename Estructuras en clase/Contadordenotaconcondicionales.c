/* Contador de notas */
#include <stdio.h>
int nota;
int main (void){
printf ("Introduce tu nota ");
scanf ("%d", &nota);
if (nota < 5)
	printf ("Estás suspendido \n");
else 
if (nota > 5 && nota < 7)
printf ("Tu nota es aprobado \n");
else 
if (nota >= 7 && nota < 9)
printf ("Tu nota es un notable \n");
else
if (nota >= 9 && nota <= 10)
printf ("Tu nota es un sobresaliente \n");
}
