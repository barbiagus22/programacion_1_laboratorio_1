#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 2


typedef struct
{
    int legajo;
    char nombre [20];
    char sexo;
    float Sueldo;
    int isEmpty;


} eEmpleado;



void inicializarEmpleados ( eEmpleado lista [], int tam );
void mostrarEmpleado ( eEmpleado unEmpleado);
void mostrarEmpleados(eEmpleado lista [], int tam);
int buscarLibre ( eEmpleado lista [], int tam);
int bucarEmpleado ( eEmpleado lista [], int tam, int legajo);
void altaEmpleado ( eEmpleado lista [], int tam);
void bajaEmpleado (eEmpleado lista [], int tam);


int menu();

int main()
{

    char seguir= 's';
    eEmpleado empleados[TAM];// 2 DEFINIR TAM
    inicializarEmpleados ( empleados, TAM ); // va el nombre de la estructura . y el tamaño.


    do
    {
        switch(menu())
        {
        case 1:
            altaEmpleado ( empleados,  TAM);
            system("pause");
            break;
        case 2:
            bajaEmpleado (empleados, TAM);
            system("pause");
            break;
        case 3:
            printf("Modificacion\n\n");
            system("pause");
            break;
        case 4:
            mostrarEmpleados (empleados, TAM);
            system("pause");
            break;
        case 5:
            printf("Ordenar\n\n");
            system("pause");
            break;
        case 6:
            printf("Salir\n\n");
            seguir= 'n';
            system("pause");
            break;

        }



    }
    while (seguir== 's');

    return 0;
}



int menu()

{
    int opcion;

    system("cls");
    printf("**** Menu opciones\n\n****");
    printf("1. Alta\n\n");
    printf("2. Baja\n\n");
    printf("3. Modificar\n\n");
    printf("4. Listar\n\n");
    printf("5. Ordenar\n\n");
    printf("6. Salir\n\n");
    printf("Ingresar opcion: ");
    scanf("%d", &opcion);

    return opcion;
}


void inicializarEmpleados ( eEmpleado lista [], int tam )

{
    for (int i=0 ; i< tam ; i++)
    {
        lista[i].isEmpty=1;

    }
}

void mostrarEmpleado ( eEmpleado unEmpleado)

{
    printf("%d, %s %c %0.2f \n", unEmpleado.legajo, unEmpleado.nombre, unEmpleado.sexo, unEmpleado.Sueldo);
}


void mostrarEmpleados(eEmpleado lista [], int tam)

{
    system("cls");
    printf("Legajo Nombre Sexo Sueldo \n\n");

    for (int i=0; i <tam; i++)
    {

        if (lista[i].isEmpty==0)
        {
            mostrarEmpleado(lista[i]);
        }
    }
}


int buscarLibre ( eEmpleado lista [], int tam)

{
    int indice=-1; //deLugarLibre

    for (int i=0; i< tam; i++)

    {
        if ( lista[i].isEmpty==1)//primer estructura libre

        {
            indice=i;

            break; // si no pongo el break va a seguir buscado sigue recorriendo y sin el break va a devolver el ultimo lugar libre.
        }

    }

    return indice; // si devuelve -1 no encontro lugar libre.

}

int bucarEmpleado ( eEmpleado lista [], int tam, int legajo)
{
    int indice=-1;

    for (int i=0; i<tam; i++)
    {
        if (lista[i].legajo==legajo && lista[i].legajo==1 ) // un empleado activo que ya tiene ese legajo cago el indice con el que tiene eses dato
        {
//1 es un empleado activo. si lo encontro devuelvo el indice- SI DEVUELVE -1 NO HAY EMPLEADO-
            indice=i;
            break;
        }
    }

    return indice; // para legajo a dar de baja y para modificar. nos sirve esta funcion.

}


void altaEmpleado ( eEmpleado lista [], int tam)

{
    int indice;
    int legajo;
    int existe;
    eEmpleado nuevoempleado;


    indice=bucarEmpleado(lista, tam, legajo);
    printf("Alta empleado");
    if (indice == -1)
    {
        printf("No hay lugar");
    }
    else
    {
        printf("Ingrese legajo\n");
        scanf("%d",&legajo);

        existe= bucarEmpleado (lista, tam, legajo);

        if ( existe!= -1)
        {
            printf("Ya existe un empleado con ese legajo %d ", legajo);
            mostrarEmpleado(lista[existe]);
        }
        else{

            nuevoempleado.legajo=legajo;
            printf("Ingrese el nombre");
            fflush(stdin);
            gets(nuevoempleado.nombre);
            printf("Ingrese sexo");
            fflush(stdin);
            scanf("%c", &nuevoempleado.sexo);
            printf("Ingrese sueldo");
            fflush(stdin);
            scanf("%f", &nuevoempleado.Sueldo);


            nuevoempleado.isEmpty=0;

            lista[indice]=nuevoempleado;

            printf("Ya se dio de alta un empleado con este legajo");
        }



    }


}


void bajaEmpleado (eEmpleado lista [], int tam)

{

    int legajo;
    int indice;
    char seguir;

    printf("Ingrese legajo\n");
    scanf("%d",&legajo);

    indice= bucarEmpleado(lista, tam, legajo);
    {
        if(indice == -1)
        {
            printf("Legajo no existe %d", legajo);
        }
        else
        {
            mostrarEmpleado(lista[indice]);
            printf("Confirma la baja");
            fflush(stdin);
            scanf("%c", &seguir);
            if (seguir== 'n')
            {
                printf("Baja cancelada");
            }
            else{

                lista[indice].isEmpty=1;
                printf("Borrado exitoso");
                system("pause");
            }




        }
    }




}
