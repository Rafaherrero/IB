/* Calcular dinero en dólares y en euros */
#include <stdio.h>
#define N 1.3805
float euros;
float dolares;
float euros2;
float dolares2;

int main (void){
  printf ("¿Cuántos euros tiene? ");
  scanf ("%f", &euros);
  printf ("¿Cuántos dólares tiene? ");
  scanf ("%f", &dolares);
  
  euros2 = euros + dolares/N;
  printf ("Tiene un total de %f euros ", euros2);
  dolares2 = dolares + euros*N;
  printf ("Tiene un total de %f dolares ", dolares2);
}