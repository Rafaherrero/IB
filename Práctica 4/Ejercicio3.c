/* Calcular la temperatura media de un lugar y su diferencia */
#include <stdio.h>
float temperaturamaxima;
float temperaturaminima;
float temperaturamedia;
float diferenciatemperatura;

int main (void){
  printf ("¿Cuál es la temperatura máxima? ");
  scanf ("%f", &temperaturamaxima);
  printf ("¿Cuál es la temperatura mínima? ");
  scanf ("%f", &temperaturaminima);
  
  temperaturamedia = (temperaturamaxima + temperaturaminima)/ 2 ;
  printf ("La temperatura media del lugar es de %f grados centígrados\n", temperaturamedia);
  diferenciatemperatura = (temperaturamaxima - temperaturaminima);
  printf ("La diferencia de temperatura del lugar es de %f grados centígrados\n", diferenciatemperatura);
}