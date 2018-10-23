#include <stdio.h>
#include <stdlib.h>




// RETURN 1 OK 0 FALSO
typedef struct

{
    int codigo;
    char marca [20];
    int capacidad;
    float precio;

}ePendrive;

int cargarPendrive ( ePendrive* Pendive);
void mostrarPendrive (ePendrive* Pendive);



int main()
{

    ePendrive miPendrive;


    cargarPendrive(&miPendrive);
    mostrarPendrive(&miPendrive);


    return 0;
}

int cargarPendrive ( ePendrive* Pendive)

{
    int todoOk=0; // terminar . validar si es null o no.

    printf("Ingrese codigo: ");
    scanf("%d", &Pendive->codigo);

    printf("Ingrese marca: ");
    scanf("%s", Pendive->marca);

    printf("Ingrese capacidad: ");
    scanf("%d", &Pendive->capacidad);

    printf("Ingrese precio: ");
    scanf("%f", &Pendive->precio);

    return 1;
}


void mostrarPendrive (ePendrive* Pendive)
{

    printf(" %d  - %s - %d - %f  ", Pendive->codigo , Pendive->marca, Pendive->capacidad , Pendive->precio );


}

