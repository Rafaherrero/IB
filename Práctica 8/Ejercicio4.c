/* Ejercicio 4 de la práctica 8. Rafael Herrero Álvarez.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>																			
#define LUGARES 6
																							/*Declaro las variables que me harán falta, así como la estructura en la que almacenar
																							los datos que introduzca el usuario */
int main (void){

int i = 0;  
float diferencia [LUGARES];

typedef struct{
char lugar[100];
float maxima;
float minima;

}Ttemperaturas;

Ttemperaturas temp[LUGARES];


for (i = 0; i < LUGARES; i++){																/*Pido al usuario que introduzca el lugar y las temperaturas máximas y mínimas del mismo */
printf ("Introduce el nombre del lugar %d: ", i+1);
scanf ("%s", &temp[i].lugar[0]);
printf ("Introduce la temperatura máxima en grados centígrados de %s: ", &temp[i].lugar[0]);
scanf ("%f", &temp[i].maxima);
printf ("Introduce la temperatura mínima en grados centígrados de %s: ", &temp[i].lugar[0]);
scanf ("%f", &temp[i].minima);

diferencia[i] = (temp[i].maxima - temp[i].minima);											/*Calculo la diferencia de temperatura para cada lugar */
}
																							/*Empiezo a distinguir las temperaturas máximas y mínimas respecto a todos los lugares,
																							y las muestro en pantalla */
																							
if ((temp[0].maxima > temp[1].maxima) && (temp[0].maxima > temp[2].maxima) && (temp[0].maxima > temp[3].maxima) && (temp[0].maxima > temp[4].maxima) && (temp[0].maxima > temp[5].maxima)){
printf ("La temperatura máxima de todas se encuentra en %s con %f ºC\n", &temp[0].lugar[0], temp[0].maxima);
}
else
if ((temp[1].maxima > temp[0].maxima) && (temp[1].maxima > temp[2].maxima) && (temp[1].maxima > temp[3].maxima) && (temp[1].maxima > temp[4].maxima) && (temp[1].maxima > temp[5].maxima)){
printf ("La temperatura máxima de todas se encuentra en %s con %f ºC\n", &temp[1].lugar[0], temp[1].maxima);
}
else
if ((temp[2].maxima > temp[0].maxima) && (temp[2].maxima > temp[1].maxima) && (temp[2].maxima > temp[3].maxima) && (temp[2].maxima > temp[4].maxima) && (temp[2].maxima > temp[5].maxima)){
printf ("La temperatura máxima de todas se encuentra en %s con %f ºC\n", &temp[2].lugar[0], temp[2].maxima);
}
else
if ((temp[3].maxima > temp[0].maxima) && (temp[3].maxima > temp[1].maxima) && (temp[3].maxima > temp[2].maxima) && (temp[3].maxima > temp[4].maxima) && (temp[3].maxima > temp[5].maxima)){
printf ("La temperatura máxima de todas se encuentra en %s con %f ºC\n", &temp[3].lugar[0], temp[3].maxima);
}
else
if ((temp[4].maxima > temp[0].maxima) && (temp[4].maxima > temp[1].maxima) && (temp[4].maxima > temp[2].maxima) && (temp[4].maxima > temp[3].maxima) && (temp[4].maxima > temp[5].maxima)){
printf ("La temperatura máxima de todas se encuentra en %s con %f ºC\n", &temp[4].lugar[0], temp[4].maxima);
}
else
if ((temp[5].maxima > temp[0].maxima) && (temp[5].maxima > temp[1].maxima) && (temp[5].maxima > temp[2].maxima) && (temp[5].maxima > temp[3].maxima) && (temp[5].maxima > temp[4].maxima)){
printf ("La temperatura máxima de todas se encuentra en %s con %f ºC\n", &temp[5].lugar[0], temp[5].maxima);
}

if ((temp[0].minima < temp[1].minima) && (temp[0].minima < temp[2].minima) && (temp[0].minima < temp[3].minima) && (temp[0].minima < temp[4].minima) && (temp[0].minima < temp[5].minima)){
printf ("La temperatura mínima de todas se encuentra en %s con %f ºC\n", &temp[0].lugar[0], temp[0].minima);
}
else
if ((temp[1].minima < temp[0].minima) && (temp[1].minima < temp[2].minima) && (temp[1].minima < temp[3].minima) && (temp[1].minima < temp[4].minima) && (temp[1].minima < temp[5].minima)){
printf ("La temperatura mínima de todas se encuentra en %s con %f ºC\n", &temp[1].lugar[0], temp[1].minima);
}
else
if ((temp[2].minima < temp[0].minima) && (temp[2].minima < temp[1].minima) && (temp[2].minima < temp[3].minima) && (temp[2].minima < temp[4].minima) && (temp[2].minima < temp[5].minima)){
printf ("La temperatura mínima de todas se encuentra en %s con %f ºC\n", &temp[2].lugar[0], temp[2].minima);
}
else
if ((temp[3].minima < temp[0].minima) && (temp[3].minima < temp[1].minima) && (temp[3].minima < temp[2].minima) && (temp[3].minima < temp[4].minima) && (temp[3].minima < temp[5].minima)){
printf ("La temperatura mínima de todas se encuentra en %s con %f ºC\n", &temp[3].lugar[0], temp[3].minima);
}
else
if ((temp[4].minima < temp[0].minima) && (temp[4].minima < temp[1].minima) && (temp[4].minima < temp[2].minima) && (temp[4].minima < temp[3].minima) && (temp[4].minima < temp[5].minima)){
printf ("La temperatura mínima de todas se encuentra en %s con %f ºC\n", &temp[4].lugar[0], temp[4].minima);
}
else
if ((temp[5].minima < temp[0].minima) && (temp[5].minima < temp[1].minima) && (temp[5].minima < temp[2].minima) && (temp[5].minima < temp[3].minima) && (temp[5].minima < temp[4].minima)){
printf ("La temperatura mínima de todas se encuentra en %s con %f ºC\n", &temp[5].lugar[0], temp[5].minima);
}

/*Comienzo a distinguir que diferencia es mayor y cual es menor, en que lugar se produce, y finalmente lo muestro en pantalla*/
																							
if ((diferencia[0] > diferencia[1]) && (diferencia[0] > diferencia[2]) && (diferencia[0] > diferencia[3]) && (diferencia[0] > diferencia[4]) && (diferencia[0] > diferencia[5])){
printf ("La mayor diferencia de temperatura se encuentra en %s con %f ºC de diferencia\n", &temp[0].lugar[0], diferencia[0]);
}
else
if ((diferencia[1] > diferencia[0]) && (diferencia[1] > diferencia[2]) && (diferencia[1] > diferencia[3]) && (diferencia[1] > diferencia[4]) && (diferencia[1] > diferencia[5])){
printf ("La mayor diferencia de temperatura se encuentra en %s con %f ºC de diferencia\n", &temp[1].lugar[0], diferencia[1]);
}
else
if ((diferencia[2] > diferencia[0]) && (diferencia[2] > diferencia[1]) && (diferencia[2] > diferencia[3]) && (diferencia[2] > diferencia[4]) && (diferencia[2] > diferencia[5])){
printf ("La mayor diferencia de temperatura se encuentra en %s con %f ºC de diferencia\n", &temp[2].lugar[0], diferencia[2]);
}
else
if ((diferencia[3] > diferencia[0]) && (diferencia[3] > diferencia[1]) && (diferencia[3] > diferencia[2]) && (diferencia[3] > diferencia[4]) && (diferencia[3] > diferencia[5])){
printf ("La mayor diferencia de temperatura se encuentra en %s con %f ºC de diferencia\n", &temp[3].lugar[0], diferencia[3]);
}
else
if ((diferencia[4] > diferencia[0]) && (diferencia[4] > diferencia[1]) && (diferencia[4] > diferencia[2]) && (diferencia[4] > diferencia[3]) && (diferencia[4] > diferencia[5])){
printf ("La mayor diferencia de temperatura se encuentra en %s con %f ºC de diferencia\n", &temp[4].lugar[0], diferencia[4]);
}
else
if ((diferencia[5] > diferencia[0]) && (diferencia[5] > diferencia[1]) && (diferencia[5] > diferencia[2]) && (diferencia[5] > diferencia[3]) && (diferencia[5] > diferencia[4])){
printf ("La mayor diferencia de temperatura se encuentra en %s con %f ºC de diferencia\n", &temp[5].lugar[0], diferencia[5]);
}

if ((diferencia[0] < diferencia[1]) && (diferencia[0] < diferencia[2]) && (diferencia[0] < diferencia[3]) && (diferencia[0] < diferencia[4]) && (diferencia[0] < diferencia[5])){
printf ("La menor diferencia de temperatura se encuentra en %s con %f ºC de diferencia\n", &temp[0].lugar[0], diferencia[0]);
}
else
if ((diferencia[1] < diferencia[0]) && (diferencia[1] < diferencia[2]) && (diferencia[1] < diferencia[3]) && (diferencia[1] < diferencia[4]) && (diferencia[1] < diferencia[5])){
printf ("La menor diferencia de temperatura se encuentra en %s con %f ºC de diferencia\n", &temp[1].lugar[0], diferencia[1]);
}
else
if ((diferencia[2] < diferencia[0]) && (diferencia[2] < diferencia[1]) && (diferencia[2] < diferencia[3]) && (diferencia[2] < diferencia[4]) && (diferencia[2] < diferencia[5])){
printf ("La menor diferencia de temperatura se encuentra en %s con %f ºC de diferencia\n", &temp[2].lugar[0], diferencia[2]);
}
else
if ((diferencia[3] < diferencia[0]) && (diferencia[3] < diferencia[1]) && (diferencia[3] < diferencia[2]) && (diferencia[3] < diferencia[4]) && (diferencia[3] < diferencia[5])){
printf ("La menor diferencia de temperatura se encuentra en %s con %f ºC de diferencia\n", &temp[3].lugar[0], diferencia[3]);
}
else
if ((diferencia[4] < diferencia[0]) && (diferencia[4] < diferencia[1]) && (diferencia[4] < diferencia[2]) && (diferencia[4] < diferencia[3]) && (diferencia[4] < diferencia[5])){
printf ("La menor diferencia de temperatura se encuentra en %s con %f ºC de diferencia\n", &temp[4].lugar[0], diferencia[4]);
}
else
if ((diferencia[5] < diferencia[0]) && (diferencia[5] < diferencia[1]) && (diferencia[5] < diferencia[2]) && (diferencia[5] < diferencia[3]) && (diferencia[5] < diferencia[4])){
printf ("La menor diferencia de temperatura se encuentra en %s con %f ºC de diferencia\n", &temp[5].lugar[0], diferencia[5]);
}

}