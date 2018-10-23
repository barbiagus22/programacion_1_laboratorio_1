#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// RETURN 1 OK 0 FALSO
typedef struct

{
    int codigo;
    char marca [20];
    int capacidad;
    float precio;

}ePendrive;


void mostrarPendrive (ePendrive* Pendive);
ePendrive* new_pendrive();



int main()
{
    ePendrive* pen1;
    //ePendrive miPendrive;

    pen1= new_pendrive();

    mostrarPendrive(pen1);

    free(pen1);

    return 0;
}


void mostrarPendrive (ePendrive* Pendive)
{

    printf(" %d  - %s - %d - %f  ", Pendive->codigo , Pendive->marca, Pendive->capacidad , Pendive->precio );

}

ePendrive* new_pendrive()

{
     ePendrive* p;

     p= (ePendrive*) malloc(sizeof(ePendrive));

     if( p != NULL )
     {
        p->codigo= 0;
        strcpy (p-> marca, "");
        p->capacidad=0;
        p->precio=0;

     }

    // inicializa en 0 los campos de la estructura.
}
