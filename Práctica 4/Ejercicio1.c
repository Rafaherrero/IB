/* Programa para calcular los dias que han pasado desde la fecha de cumpleanos */
#include <stdio.h>
#define ANIO 1980
#define DIAS 365
#define DIASMES 30
int ano;
int mes;
int dia;
int tiempo;

int main (void){
  printf ("Introduzca su año de nacimiento ");
  scanf ("%d", &ano);
  printf ("Introduzca su mes de nacimiento ");
  scanf ("%d", &mes);
  printf ("Introduzca su día de nacimiento ");
  scanf ("%d", &dia);
  
  tiempo = ((ano -ANIO)*DIAS + (mes*DIASMES) + dia);
  printf ("Desde la fecha de su nacimiento han pasado %d días ", tiempo);
}