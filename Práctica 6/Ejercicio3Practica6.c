/* Programa para la diferencia y la media de temperaturas de distintos lugares */
#include <stdio.h>
#define LUGARES 4 /* Aumenta de dos en dos ya que hay que tener en cuenta que son dos temperaturas y no una */
#define MAXIMO 7

float temperatura[LUGARES][MAXIMO];
float mediatemperaturasprimer;
float mediatemperaturassegundo;
float mediatemperaturassegundocelsius;
float mediatotal;
float diferenciaprimerlugar;
float diferenciasegundolugarcelsius;

int main (void){
	printf ("Introduzca la temperatura máxima en grados Celsius del primer lugar: ");
	scanf ("%f", &temperatura[0][0]);
	printf ("Introduzca la temperatura mínima en grados Celsius del primer lugar: ");
	scanf ("%f", &temperatura[1][0]);
	printf ("Introduzca la temperatura máxima en grados Fahrenheit del segundo lugar: ");
	scanf ("%f", &temperatura[2][0]);
	printf ("Introduzca la temperatura mínima en grados Fahrenheit del segundo lugar: ");
	scanf ("%f", &temperatura[3][0]);
		
	mediatemperaturasprimer = ((temperatura[0][0]+temperatura[1][0])/2);
	mediatemperaturassegundo = ((temperatura[2][0]+temperatura[3][0])/2); 
	mediatemperaturassegundocelsius = ((mediatemperaturassegundo-32)/1.8);
	mediatotal = ((mediatemperaturasprimer+mediatemperaturassegundocelsius)/2);
	
	printf ("La media de las temperaturas en grados Celsius es de %fº\n", mediatotal);
	
	diferenciaprimerlugar = (temperatura[0][0] - temperatura [1][0]);
	diferenciasegundolugarcelsius = (((temperatura[2][0]-32)/1.8) - ((temperatura [3][0]-32)/1.8));
		
	printf ("La diferencia de temperatura del primer lugar en grados Celsius es de %fº\n", diferenciaprimerlugar);
	printf ("La diferencia de temperatura del segundo lugar en grados Celsius es de %fº\n", diferenciasegundolugarcelsius); 

	return 0;
}