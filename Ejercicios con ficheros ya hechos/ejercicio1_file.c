/*
EJERCICIO I. SENTENCIAS DE CONTROL
Escribir un programa en C que recoja el nombre, apellidos, DNI, las  edades 
y la dirección (calle, número y código postal) de 5 alumnos. 
Tratar como un bloque, nombre y apellidos y por otra parte la dirección, 
mostrar el promedio de edad de los que viven en La Laguna
(código postal 38201,38202).
*/
/*Tipo de datos, recogemos varios datos de diferente tipo de cada persona: 
       nombre, apellidos son strings, es decir arrays de char, piden que se trate
               en bloque, por tanto esa información va e un struct
       edad es un entero sin signo
       DNI, si consideramos sólo un número puede ser un entero, 
            pero hay que tener cuidado que tenga capacidad para los valores. 
            Puede tomarse  también como una cadena de char.
       dirección se trata como bloque, por tanto también será un struct con calle
               número y cp. El número de código postal también puede dar problemas
               según el tamño del int que se admita. 
luego elegimos una struct, con los campos:
               nombre(struct)
               dirección
               edad
               DNI
*/

#include <stdio.h>
#define TAM_NOMBRE 20
#define NUM_PERSONAS 5
#define TAM_CALLE 40

/*Definición de los tipos de datos*/

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
int cont = 0; /*Se usa para contar cuántos viven en La Laguna*/
FILE *fichero_lectura, *fichero_escritura;
    /*LECTURA DE LOS DATOS */
    /*Abrir el fichero, suponemos que ya está creado y sólo vamos a leer*/
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
    /*Abrir el fichero, suponemos que sólo vamos a escribir*/
    fichero_escritura = fopen("./ficheros/datospersonas2.txt", "w");
    if(fichero_escritura != NULL){
         escribir_datos(fichero_escritura, datos, NUM_PERSONAS);
    }
    else{
         printf("\nError en la apertura del fichero de escritura\n");     
    }
    fclose(fichero_escritura);
    escribir_datos(fichero_escritura, datos, NUM_PERSONAS);
    /*CÁLCULO DE LA MEDIA*/
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
    /*Nótese que no es necesario el & porque hemos leído arrays de char, su nombre equivale a dirección de memoria*/
    /*Lectura del struct con la dirección */ 
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
    /*Escritura del struct con la dirección */ 
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
            
    /*Cada persona se mira si vive en La Laguna, según el valor del cp
      si es así se acumula su edad en la media, lo hacemos con acumulador 
      para poder hacerlo todo de una pasada
    */
              if(vdatos[i].direccion.cp == 38201 || vdatos[i].direccion.cp == 38202){
                   media = media + vdatos[i].edad;
                   cont++;
              }           
    }
    /*Cuando se han introducido todos los datos se calcula la media, con lo que esté
    acumulado / casos que viven en LL*/
              return media = media /cont;        
}
