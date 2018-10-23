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

int main()
{

    ePendrive miPendrive;


    printf("Hello world!\n");
    return 0;
}

int cargarPendrive ( ePendrive* Pendive)
{
    printf("Ingrese codigo: ");
    scanf("%d", &Pendive->codigo);

    printf("Ingrese marca: ");
    scanf("%s", Pendive->marca);

    printf("Ingrese capacidad: ");
    scanf("%d", &Pendive->capacidad);

    printf("Ingrese precio: ");
    scanf("%f", &Pendive->precio);


    if (Pendive!= NULL && )
    {

    }
    return


}
