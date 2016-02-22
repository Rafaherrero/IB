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
        long int dni;
}Tdatos;



int main(){

Tdatos datos[NUM_PERSONAS];
int i;
float media = 0.0; /*Se usa para acumular la edad de los que viven en La Laguna*/
int cont = 0; /*Se usa para contar cu�ntos viven en La Laguna*/
    
    /*LECTURA DE LOS DATOS */
    /*NUM_PERSONAS fijas que se leen, por tanto bucle for*/
    for(i=0; i<NUM_PERSONAS; i++){
    /*Lectura del struct con los datos de nombre y apellidos */ 
    /*Ojo, no poner i = i +1 porque alteras la secuencia del for.*/
             printf("\nIntroduzca la persona %d ...", i+1); 
             printf("\n       Introduca nombre....");
             scanf(" %[^\n]", datos[i].persona.nombre);
             printf("\n       Introduca primer apellido....");
             scanf(" %[^\n]", datos[i].persona.apellido1);
             printf("\n       Introduca segundo apellido....");
             scanf(" %[^\n]", datos[i].persona.apellido2);
    /*N�tese que no es necesario el & porque hemos le�do arrays de char, su nombre equivale a direcci�n de memoria*/
    /*Lectura del struct con la direcci�n */ 
              printf("\nIntroduzca la direcci�n....");
              printf("\n       Introduzca la calle....");
              scanf(" %[^\n]", datos[i].direccion.calle);
              printf("\n       Introduzca el n�mero....");
              scanf("%d", &datos[i].direccion.numero);
              printf("\n       Introduzca el c�digo postal....");
              scanf(" %u", &datos[i].direccion.cp);
             
              
              
    /*Lectura de los datos edad y dni*/
              printf("\n        Introduzca la edad....");
              scanf(" %d", &datos[i].edad);
              printf("\n        Introduzca el DNI, s�lo n�mero....");
              scanf(" %ld", &datos[i].dni);     
    /*Cada persona se mira si vive en La Laguna, seg�n el valor del cp
      si es as� se acumula su edad en la media, lo hacemos con acumulador 
      para poder hacerlo todo de una pasada
    */
              if(datos[i].direccion.cp == 38201 || datos[i].direccion.cp == 38202){
                   media = media + datos[i].edad;
                   cont++;
              }                 
    }
    
    /*Cuando se han introducido todos los datos se calcula la media, con lo que est�
    acumulado / casos que viven en LL*/
    
              media = media /cont;
    
    
    
    /*
      Se muestran los datos en pantalla   
    */
    
    /*Escritura del struct con los datos de nombre y apellidos */ 
    /*Ojo, no poner i = i +1 porque alteras la secuencia del for.*/
    for(i=0;i<NUM_PERSONAS; i++){
             printf("\nDatos de la persona %d ...", i+1); 
             printf("\n       Nombre....%s", datos[i].persona.nombre);
             printf("\n       Primer apellido....%s", datos[i].persona.apellido1);
             printf("\n       Segundo apellido....%s", datos[i].persona.apellido2);
    /*Escritura del struct con la direcci�n */ 
              printf("\nDirecci�n....");
              printf("\n       Calle....%s",  datos[i].direccion.calle);
              printf("\n       N�mero....%d", datos[i].direccion.numero);
              printf("\n       C�digo postal....%u", datos[i].direccion.cp);
    /*Escritura de los datos edad y dni*/
              printf("\n        Edad....%d", datos[i].edad);
              printf("\n        DNI, s�lo n�mero....%ld", datos[i].dni);     
    }
    /*Escritura de la media*/
              printf("\n        La media de edad de los laguneros es...%f", media);
    
    }
