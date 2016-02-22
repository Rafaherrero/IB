/*
EJERCICIO I. SENTENCIAS DE CONTROL
Escribir un programa en C que recoja el nombre, apellidos, DNI, las  edades 
y la direcci�n (calle, n�mero y c�digo postal) de 5 alumnos. 
Tratar como un bloque, nombre y apellidos y por otra parte la direcci�n, 
mostrar el promedio de edad de los que viven en La Laguna
(c�digo postal 38201,38202).
*/
/*Tipo de datos, recogemos varios datos de diferente tipo de cada persona: 
       nombre, apellidos son strings, es decir arrays de char, piden que se trate
               en bloque, por tanto esa informaci�n va e un struct
       edad es un entero sin signo
       DNI, si consideramos s�lo un n�mero puede ser un entero, 
            pero hay que tener cuidado que tenga capacidad para los valores. 
            Puede tomarse  tambi�n como una cadena de char.
       direcci�n se trata como bloque, por tanto tambi�n ser� un struct con calle
               n�mero y cp. El n�mero de c�digo postal tambi�n puede dar problemas
               seg�n el tam�o del int que se admita. 
luego elegimos una struct, con los campos:
               nombre(struct)
               direcci�n
               edad
               DNI
*/

#include <stdio.h>
#define TAM_NOMBRE 20
#define NUM_PERSONAS 5
#define TAM_CALLE 40

/*Definici�n de los tipos de datos*/

typedef struct{
        char nombre[TAM_NOMBRE]; 
        char apellido1[TAM_NOMBRE];
        char apellido2[TAM_NOMBRE];
}Tpersona;

typedef struct{
        char calle[TAM_CALLE];
        int numero;
        unsigned int cp;
}Tdireccion;

typedef struct{
        Tpersona persona;
        Tdireccion direccion;
        int edad;
        unsigned long int dni;
}Tdatos;

int leer_datos(FILE *fich, Tdatos vdatos[], int tam);
void escribir_datos(FILE *fich, Tdatos vdatos[], int tam);
float media(Tdatos vdatos[], int tam);



int main(){

Tdatos datos[NUM_PERSONAS];
int i;
float vmedia = 0.0; /*Se usa para acumular la edad de los que viven en La Laguna*/
int cont = 0; /*Se usa para contar cu�ntos viven en La Laguna*/
FILE *fichero_lectura, *fichero_escritura;
    /*LECTURA DE LOS DATOS */
    /*Abrir el fichero, suponemos que ya est� creado y s�lo vamos a leer*/
    fichero_lectura = fopen("./ficheros/datospersonas.txt", "r");
    printf(".....................................................\n");
    if(fichero_lectura != NULL){
         leer_datos(fichero_lectura, datos, NUM_PERSONAS);
    }
    else{
         printf("\nError en la apertura del fichero de lectura \n");     
    }
    fclose(fichero_lectura);
    /*ESCRITURA DE LOS DATOS */
    /*Abrir el fichero, suponemos que s�lo vamos a escribir*/
    fichero_escritura = fopen("./ficheros/datospersonas2.txt", "w");
    if(fichero_escritura != NULL){
         escribir_datos(fichero_escritura, datos, NUM_PERSONAS);
    }
    else{
         printf("\nError en la apertura del fichero de escritura\n");     
    }
    fclose(fichero_escritura);
    escribir_datos(fichero_escritura, datos, NUM_PERSONAS);
    /*C�LCULO DE LA MEDIA*/
     vmedia = media(datos, NUM_PERSONAS);
     printf("\nLa media de edad de los laguneros es %f\n", vmedia);
    
             
    
    
    
    
    }
    
int leer_datos(FILE *fichero_lectura, Tdatos vdatos[], int tam){
int i;
    
    /*LECTURA DE LOS DATOS */
    /*NUM_PERSONAS fijas que se leen, por tanto bucle for*/
    for(i=0; i<tam; i++){
    /*Lectura del struct con los datos de nombre y apellidos */ 
    /*Ojo, no poner i = i +1 porque alteras la secuencia del for.*/
             fscanf(fichero_lectura, " %[^\n]", vdatos[i].persona.nombre);
             fscanf(fichero_lectura, " %[^\n]", vdatos[i].persona.apellido1);
             fscanf(fichero_lectura, " %[^\n]", vdatos[i].persona.apellido2);
    /*N�tese que no es necesario el & porque hemos le�do arrays de char, su nombre equivale a direcci�n de memoria*/
    /*Lectura del struct con la direcci�n */ 
              fscanf(fichero_lectura, " %[^\n]", vdatos[i].direccion.calle);
              fscanf(fichero_lectura, "%d", &vdatos[i].direccion.numero);
              fscanf(fichero_lectura," %u", &vdatos[i].direccion.cp);                      
    /*Lectura de los datos edad y dni*/
              fscanf(fichero_lectura, " %d", &vdatos[i].edad);
              fscanf(fichero_lectura, " %ld", &vdatos[i].dni);  
    }
}
void escribir_datos(FILE *fich,Tdatos vdatos[], int tam){
int i;
     /*Escritura del struct con los datos de nombre y apellidos */ 
    /*Ojo, no poner i = i +1 porque alteras la secuencia del for.*/
    for(i=0;i<NUM_PERSONAS; i++){
             fprintf(fich,"\n%s", vdatos[i].persona.nombre);
             fprintf(fich, "\n%s", vdatos[i].persona.apellido1);
             fprintf(fich, "\n%s", vdatos[i].persona.apellido2);
    /*Escritura del struct con la direcci�n */ 
              fprintf(fich, "\n%s",  vdatos[i].direccion.calle);
              fprintf(fich, "\n%d", vdatos[i].direccion.numero);
              fprintf(fich, "\n%u", vdatos[i].direccion.cp);
    /*Escritura de los datos edad y dni*/
              fprintf(fich, "\n%d", vdatos[i].edad);
              fprintf(fich, "\n%lu", vdatos[i].dni);     
    }     
}

float media(Tdatos vdatos[], int tam){
int i;
int cont =0;
float media=0.0;
    for(i=0;i<tam;i++){
            
    /*Cada persona se mira si vive en La Laguna, seg�n el valor del cp
      si es as� se acumula su edad en la media, lo hacemos con acumulador 
      para poder hacerlo todo de una pasada
    */
              if(vdatos[i].direccion.cp == 38201 || vdatos[i].direccion.cp == 38202){
                   media = media + vdatos[i].edad;
                   cont++;
              }           
    }
    /*Cuando se han introducido todos los datos se calcula la media, con lo que est�
    acumulado / casos que viven en LL*/
              return media = media /cont;        
}
