/* Ejercicio 1 de la practica 7 sobre números pares e impares*/
#include  <stdio.h>
#define CANT 5
int numeros[CANT];
int par[CANT];
int impar[CANT];
int negativo[CANT];
int sumanegativos;
int sumapar;
int mediapar;
int mediapardivision;
int productoimpar;
int num[CANT];
int main (void){

	printf ("Introduce el primer número: ");
	scanf ("%d", &numeros[0]);
	printf ("Introduce el segundo número: ");
	scanf ("%d", &numeros[1]);
	printf ("Introduce el tercer número: ");
	scanf ("%d", &numeros[2]);
	printf ("Introduce el cuarto número: ");
	scanf ("%d", &numeros[3]);
	printf ("Introduce el quinto número: ");
	scanf ("%d", &numeros[4]);
	
	num[0] = numeros[0]%2;

	if (num[0] == 0){
	par[0] = numeros[0];
	impar[0] = 1;
	mediapardivision++; 
	}
	else{
	impar[0] = numeros[0];
	par[0] = 0;
	}
	
	num[1] = numeros[1]%2;

	if (num[1] == 0){
	par[1] = numeros[1];
	impar[1] = 1;
	mediapardivision++;
	}
	else{
	impar[1] = numeros[1];
	par[1] = 0;
	}
	
	num[2] = numeros[2]%2;

	if (num[2] == 0){
	par[2] = numeros[2];
	impar[2] = 1;
	mediapardivision++;
	}
	else{
	impar[2] = numeros[2];
	par[2] = 0;
	}
	
	num[3] = numeros[3]%2;

	if (num[3] == 0){
	par[3] = numeros[3];
	impar[3] = 1;
	mediapardivision++;
	}
	else{
	impar[3] = numeros[3];
	par[3] = 0;
	}
	
	num[4] = numeros[4]%2;

	if (num[4] == 0){
	par[4] = numeros[4];
	impar[4] = 1;
	mediapardivision++;
	}
	else{
	impar[4] = numeros[4];
	par[4] = 0;
	}

	sumapar = par[0]+par[1]+par[2]+par[3]+par[4];
	mediapar = (par[0]+par[1]+par[2]+par[3]+par[4])/mediapardivision ;
	
	printf ("La suma de los números pares es %d\n", sumapar);
	printf ("La media de los números pares es %d\n", mediapar);
	
	productoimpar = impar[0]*impar[1]*impar[2]*impar[3]*impar[4];
	
	printf ("El producto de los números impares es %d\n", productoimpar);
	
	if (impar[0] < 0){
	negativo[0] = 1;
	}
	else{
	negativo[0] = 0;
	}
	
	if (impar[1] < 0){
	negativo[1] = 1;
	}
	else{
	negativo[1] = 0;
	}
	
	if (impar[2] < 0){
	negativo[2] = 1;
	}
	else{
	negativo[2] = 0;
	}
	
	if (impar[3] < 0){
	negativo[3] = 1;
	}
	else{
	negativo[3] = 0;
	}
	
	if (impar[4] < 0){
	negativo[4] = 1;
	}
	else{
	negativo[4] = 0;
	}
	
	sumanegativos = negativo[0]+negativo[1]+negativo[2]+negativo[3]+negativo[4];
	
	printf ("Ha introducido %d números impares negativos\n", sumanegativos);

}

