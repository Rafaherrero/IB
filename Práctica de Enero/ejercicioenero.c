/* Ejercicio 1 de la ficha de ejercicios para entregar el día del examen
Rafael Herrero Alvarez. 1º Ingenieria Informatica. Turno de tarde*/

/* Incluimos la libreria que vamos a utilizar */
#include <stdio.h> 

/* Definimos de manera global que el tamaño de nuestra matriz va a ser de 4x4 */
#define TAM_MAT 4 

/* Declaramos las diferentes funciones para cada uno de los casos expuestos en
el ejercicio*/
int pasararray(FILE *fich, int matriz[][TAM_MAT]); 
int mostrarmat(int mat[][TAM_MAT]);
int operacionesfila(int mat[][TAM_MAT]);
int operacionescolumna(int mat[][TAM_MAT]);

/*Empezamos con la función main*/
int main (){

/*Declaramos las diferentes variables que vamos a utilizar*/
FILE *fichero;
int mat[TAM_MAT][TAM_MAT];
char opcion;

/*Abrimos el fichero*/
fichero = fopen("datosmatriz.txt", "r");

/*Comprobamos si se ha podido abrir correctamente o si ha surgido algún problema*/
if (fichero != NULL){
/*Si todo esta correcto, pasamos la matriz del archivo a un array*/
pasararray(fichero, mat);
/*Cerramos el archivo, puesto que no lo vamos a necesitar más y ocupa memoria*/
fclose (fichero);
/*Creamos un menú para las cuatro opciones que nos pide el ejercicio*/
printf ("Este programa le permitirá realizar diferentes cálculos con matrices. A continuación, seleccione una opción.\n");
		do{
		printf ("\na.- Mostrar los datos de la matriz.");
		printf ("\nb.- Mostrar el máximo, mínimo y la media de cada fila.");
		printf ("\nc.- Mostrar el máximo, mínimo y la media de cada columna.");
		printf ("\nd.- Salir del programa.");
		printf ("\n\nIntroduzca una opción: ");
		scanf ("%s", &opcion);
		/*Dependiendo de la opción elegida realizaremos una operación u otra*/
		if (opcion == 'a'){
		printf("\n");
		mostrarmat(mat);
		}
		if (opcion == 'b'){
		operacionesfila(mat);
		}
		if (opcion == 'c'){
		operacionescolumna(mat);
		}
		if (opcion == 'd'){
		printf ("\nGracias por utilizar el programa.\n\n");
		}
		/*Se seguirá mostrando el menú hasta que usuario pulse la tecla 'd', que le indicará al programa que ya ha terminado*/
		} while (opcion != 'd');
}

/*En caso de que hubiese un error al abrir el archivo, se le decimos al usuario*/
    else{
         printf("\nHa ocurrido un error en la apertura del archivo.\n\n");
    }
}

/*Con esta función pasaremos la matriz del .txt a un array que podremos manejar*/
int pasararray(FILE *fich, int mat[][TAM_MAT]){
int i, j;

/*Creamos un bucle para que almacene cada número en su posición correspondiente del array*/
for (i=0;i<TAM_MAT; i++){
	for (j=0; j<TAM_MAT; j++){
	fscanf(fich, "%d", &mat[i][j]);
          }
       }
return 0;
 }

/*Con esta función mostraremos la matriz tal y como esta en el archivo .txt, siempre y cuando el usuario pulse la tecla 'a'*/
int mostrarmat(int mat[][TAM_MAT]){
int i , j;

/*Este bucle imprimirá todos los números del array como si fuese una matriz cuadrada, y no como una sucesión de números*/
  for(i=0; i<TAM_MAT; i++){
              for(j=0; j<TAM_MAT; j++){
                       printf("%d ", mat[i][j]);
              }
              printf("\n");
         }
return 0;
}

/*Con esta función calcularemos el número máximo, mínimo y la media de todas las filas de la matriz, 
siempre y cuando el usuario pulse la tecla 'b'*/
int operacionesfila(int mat[][TAM_MAT]){

/*Declaramos las variables para los bucles, para el número máximo, mínimo, la suma de toda una fila y la media de la misma*/
int i , j;
int maximo[TAM_MAT] = {-32767, -32767, -32767, -32767};
int minimo[TAM_MAT] = {32767, 32767, 32767, 32767};
float suma[TAM_MAT] = {0, 0, 0, 0};
float media[TAM_MAT] = {0, 0, 0, 0};

/*Con este bucle calcularemos cuál es el número más alto de todas las filas*/
  for(i=0; i<TAM_MAT; i++){
              for(j=0; j<TAM_MAT; j++){
              if (mat[i][j] > maximo[i]){
              maximo[i] = mat[i][j];
              }
              }
              }
              
	for(i=0; i<TAM_MAT; i++){
	printf ("\nEl máximo de la fila %d es %d.", i+1, maximo[i]);
	}
	printf ("\n");
	
/*Con este bucle calcularemos cuál es el número más bajo de todas las filas*/
for(i=0; i<TAM_MAT; i++){
              for(j=0; j<TAM_MAT; j++){
              if (mat[i][j] < minimo[i]){
              minimo[i] = mat[i][j];
              }
              }
              }
              
	for(i=0; i<TAM_MAT; i++){
	printf ("\nEl mínimo de la fila %d es %d.", i+1, minimo[i]);
	}
    printf ("\n");  

/*Con este bucle calcularemos cuál es la media de todas las filas*/
for(i=0; i<TAM_MAT; i++){
              for(j=0; j<TAM_MAT; j++){
          		suma[i]=suma[i]+mat[i][j];
          		media[i]=(suma[i]/TAM_MAT);
          		}
          		}
          		
	for(i=0; i<TAM_MAT; i++){
	printf ("\nLa media de la fila %d es %f.", i+1, media[i]);
	}
    printf ("\n");  
          		
return 0;
}

/*Con esta función calcularemos el número máximo, mínimo y la media de todas las columnas de la matriz, 
siempre y cuando el usuario pulse la tecla 'c'*/
int operacionescolumna(int mat[][TAM_MAT]){

/*Declaramos las variables para los bucles, para el número máximo, mínimo, la suma de toda una columna y la media de la misma*/
int i , j;
int maximo[TAM_MAT] = {-32767, -32767, -32767, -32767};
int minimo[TAM_MAT] = {32767, 32767, 32767, 32767};
float suma[TAM_MAT] = {0, 0, 0, 0};
float media[TAM_MAT] = {0, 0, 0, 0};

/*Con este bucle calcularemos cuál es el número más alto de todas las columnas*/
  for(i=0; i<TAM_MAT; i++){
              for(j=0; j<TAM_MAT; j++){
              if (mat[j][i] > maximo[i]){
              maximo[i] = mat[j][i];
              }
              }
              }
              
	for(i=0; i<TAM_MAT; i++){
	printf ("\nEl máximo de la columna %d es %d.", i+1, maximo[i]);
	}
	printf ("\n");
	
/*Con este bucle calcularemos cuál es el número más bajo de todas las columnas*/	
for(i=0; i<TAM_MAT; i++){
              for(j=0; j<TAM_MAT; j++){
              if (mat[j][i] < minimo[i]){
              minimo[i] = mat[j][i];
              }
              }
              }
              
	for(i=0; i<TAM_MAT; i++){
	printf ("\nEl mínimo de la columna %d es %d.", i+1, minimo[i]);
	}
    printf ("\n");  

/*Con este bucle calcularemos cuál es la media de todas las columnas*/    
for(i=0; i<TAM_MAT; i++){
              for(j=0; j<TAM_MAT; j++){
          		suma[i]=suma[i]+mat[j][i];
          		media[i]=(suma[i]/TAM_MAT);
          		}
          		}
          		
	for(i=0; i<TAM_MAT; i++){
	printf ("\nLa media de la columna %d es %f.", i+1, media[i]);
	}
    printf ("\n");  
          		
return 0;
}
