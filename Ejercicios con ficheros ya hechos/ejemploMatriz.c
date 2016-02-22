/*Ejercicio que muestra la lectura de una matriz de números almacenada
en un fichero. La lectura se hace mediante una función. También cambia 
los números negativos por 0. Se define una función que lleva a cabo el 
cambio e indica cuántos números eran negativos. Todas las variables son 
locales, es importante darse cuenta cómo es el paso de la matriz a las 
funciones.*/


#include <stdio.h>

#define TAM_MATRIZ 4
/*Para poder pasar la matriz a la función es necesario dejar la primera dimensión vacía
se estará pasando así un array de direcciones de memoria, cada una de ellas en
realidad representa un vector fila*/
int negativos(int matriz[][TAM_MATRIZ], int tam); 
int muestra(int matriz[][TAM_MATRIZ], int tam);
int lectura(FILE *fich, int lectura[][TAM_MATRIZ], int tam);

int main(){

int i, j;
FILE *fichero;
int matriz[TAM_MATRIZ][TAM_MATRIZ];    
    /*Apertura del fichero, si no hay error se leen los datos*/
    fichero = fopen("./ficheros/matriz.dat", "r");
    if (fichero != NULL){
       lectura(fichero, matriz, TAM_MATRIZ);
       fclose(fichero);
    }
    else{
         printf("\nERROR EN LA APERTURA DEL FICHERO");
    }
    /*Se muestra la matriz que se ha leído desde fichero*/
    muestra(matriz, TAM_MATRIZ);
    printf("\n");
    /*Se muestra la cantidad de nºs negativos y se cambian mediante la función negativos*/    
    printf("\n\nLA MATRIZ TIENE %d ELEMENTOS NEGATIVOS", negativos(matriz, TAM_MATRIZ));
    printf("\n");
    /*Como la matriz ha cambiado se vuelve a mostrar*/
    muestra(matriz, TAM_MATRIZ);
}

int negativos(int matriz[][TAM_MATRIZ], int tam){
int i, j, cont=0;    
    for(i=0; i<tam; i++){
         for(j =0; j <tam; j++){
               if(matriz[i][j] < 0){
                    matriz[i][j] =0;              
                    cont++;
               }          
         }
    }
    return cont;
}

int muestra(int matriz[][TAM_MATRIZ], int tam){
int i , j;

  for(i=0; i<TAM_MATRIZ; i++){
              for(j=0; j<TAM_MATRIZ; j++){
                       printf("%d ", matriz[i][j]);
              }
              printf("\n");
         }


}
int lectura(FILE *fich, int matriz[][TAM_MATRIZ], int tam){
 
 int i, j;   
     for(i=0; i<TAM_MATRIZ; i++){
          for(j=0; j<TAM_MATRIZ; j++){
                fscanf(fich, "%d", &matriz[i][j]);
          }
       }
 }
