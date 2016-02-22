/* Datos de diferentes ciudades */
#include <stdio.h>
#define MAX_NOMBRE 20
#define MAX_CIUDAD 5

typedef struct{
char nombre_ciudad[MAX_NOMBRE];
float temperatura;
int num_hab;
} Tciudad;
Tciudad ciudades[MAX_CIUDAD];

int main (void){
	printf ("Introduce el nombre de la primera ciudad: ");
	scanf ("%[^\n]", &ciudades[0].nombre_ciudad[0]);
	printf ("Introduce la temperatura de la primera ciudad en grados Celsius: ");
	scanf ("%f", &ciudades[0].temperatura);
	printf ("Introduce el número de habitantes de la primera ciudad: ");
	scanf ("%d", &ciudades[0].num_hab);
	
	printf ("Introduce el nombre de la segunda ciudad: ");
	scanf ("%[^\n]", &ciudades[1].nombre_ciudad[0]);
	printf ("Introduce la temperatura de la segunda ciudad en grados Celsius: ");
	scanf ("%f", &ciudades[1].temperatura);
	printf ("Introduce el número de habitantes de la segunda ciudad: ");
	scanf ("%d", &ciudades[1].num_hab);
	
	printf ("Introduce el nombre de la tercera ciudad: ");
	scanf ("%[^\n]", &ciudades[2].nombre_ciudad[0]);
	printf ("Introduce la temperatura de la tercera ciudad en grados Celsius: ");
	scanf ("%f", &ciudades[2].temperatura);
	printf ("Introduce el número de habitantes de la tercera ciudad: ");
	scanf ("%d", &ciudades[2].num_hab);
	
	printf ("Introduce el nombre de la cuarta ciudad: ");
	scanf ("%[^\n]", &ciudades[3].nombre_ciudad[0]);
	printf ("Introduce la temperatura de la cuarta ciudad en grados Celsius: ");
	scanf ("%f", &ciudades[3].temperatura);
	printf ("Introduce el número de habitantes de la cuarta ciudad: ");
	scanf ("%d", &ciudades[3].num_hab);
	
	printf ("Introduce el nombre de la quinta ciudad: ");
	scanf ("%[^\n]", &ciudades[4].nombre_ciudad[0]);
	printf ("Introduce la temperatura de la quinta ciudad en grados Celsius: ");
	scanf ("%f", &ciudades[4].temperatura);
	printf ("Introduce el número de habitantes de la quinta ciudad: ");
	scanf ("%d", &ciudades[4].num_hab);
}