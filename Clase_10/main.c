#include <stdio.h>
#include <stdlib.h>

#define TAM 6


typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    int idSector;
    int isEmpty;
} eEmpleado;

typedef struct
{
    int id;
    char descripcion [20];

} eSector;

int menu();
void inicializarEmpleados(eEmpleado lista[], int tam);
void mostrarEmpleado(eEmpleado unEmpleado , eSector [], int tam);
int buscarLibre(eEmpleado lista[], int tam);
int buscarEmpleado(eEmpleado lista[], int tam, int legajo);
void altaEmpleado(eEmpleado lista[], int tam, eSector sectores[], int tamsectores);
void bajaEmpleado(eEmpleado lista[], int tam, eSector sectores[], int tamsectores);
void ModificarEmpleado(eEmpleado lista[], int tam, eSector sectores[], int tamsectores);
void listarSectores (eSector sectores[], int tam);
void obtenerSector ( eSector sectores[], int tam, int idSector, char cadena[] );
//void ordenarEmpleadosXlegajo(empleado lista[], int tam);
//void harcodearEmpleados (eEmpleado empleados []);

int main()
{
    char seguir = 's';
    eEmpleado empleados[TAM];
    inicializarEmpleados(empleados,TAM);
    //harcodearEmpleados ( empleados );

    eSector sectores[]=
    {
        {1, "RRHH"},
        {2, "Ventas"},
        {3, "Compras"},
        {4, "Contable"},
        {5, "Sistemas"},

    };

    do
    {
        switch(menu())
        {
        case 1:
            altaEmpleado(empleados, TAM, sectores, 8); // VER CUAL ES EL TAM DE EMPLAEDOS.

            break;
        case 2:
            bajaEmpleado(empleados,TAM, sectores, 8);
            break;
        case 3:
            ModificarEmpleado(empleados, TAM, sectores, 8);
            system("pause");
            break;
        case 4:
            mostrarEmpleados(empleados,TAM , sectores, 8);
            break;
        case 5:
            ordenarEmpleadosXlegajo(empleados, TAM);
            system("pause");
            break;
        case 6:
            printf("Salir");
            system("pause");
            seguir = 'n';
            break;
        }
    }
    while(seguir == 's');

    return 0;
}

int menu()
{

    int opcion;

    system("cls");
    printf("\n*** Menu de Opciones ***\n\n");
    printf(" 1- Alta\n");
    printf(" 2- Baja\n");
    printf(" 3- Modificacion\n");
    printf(" 4- Listar Empleados\n");
    printf(" 5- Ordenar Empleados\n");
    printf(" 6- Salir\n\n");
    printf(" Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

void inicializarEmpleados(eEmpleado lista[], int tam)
{

    for(int i=0; i < tam; i++)
    {

        lista[i].isEmpty = 1;
    }
}

void mostrarEmpleado(eEmpleado unEmpleado, eSector [], int tam)
{
    char desSector [20];


    obtenerSector(sectores, tam,  unEmpleado.idSector, desSector );

    printf("%d %s %c %.2f\n   %d ", unEmpleado.legajo, unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldo. unEmpleado.idSector);
}

void mostrarEmpleados(eEmpleado lista[], int tam, eSector [], int tam)
{

    system("cls");
    printf("Legajo Nombre Sexo Sueldo\n\n");

    for(int i=0; i < tam; i++)
    {

        if( lista[i].isEmpty == 0)
        {
            mostrarEmpleado(lista[i], sectores, tamSector);
        }
    }
    system("pause");
}


int buscarLibre(eEmpleado lista[], int tam)
{
    int indice = -1;

    for(int i=0; i < tam; i++)
    {

        if( lista[i].isEmpty == 1)
        {
            indice = i;
            break;
        }
    }
    return indice;
}


int buscarEmpleado(eEmpleado lista[], int tam, int legajo)
{
    int indice = -1;

    for(int i=0; i < tam; i++)
    {

        if( lista[i].legajo == legajo && lista[i].isEmpty == 0)
        {
            indice = i;
            break;
        }
    }
    return indice;

}

void altaEmpleado(eEmpleado lista[], int tam, eSector sectores[], int tamsectores)
{
    int indice;
    int legajo;
    int existe;
    eEmpleado nuevoEmpleado;

    indice = buscarLibre(lista, tam);

    system("cls");
    printf("*** Alta empleado ***\n\n");

    if( indice == -1)
    {

        printf("No hay lugar en el sistema\n\n");
        system("pause");
    }
    else
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajo);

        existe = buscarEmpleado(lista, tam, legajo);

        if( existe != -1)
        {

            printf("Ya existe un empleado con el legajo %d\n", legajo);
            mostrarEmpleado(lista[existe]);
            system("pause");

        }
        else
        {

            nuevoEmpleado.legajo = legajo;

            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(nuevoEmpleado.nombre);
            printf("Ingrese sexo: ");
            fflush(stdin);
            scanf("%c", &nuevoEmpleado.sexo);
            printf("Ingrese sueldo: ");
            fflush(stdin);
            scanf("%f", &nuevoEmpleado.sueldo);

            listarSectores(sectores,tam);
            printf("Ingrese Sector: ");
            fflush(stdin);
            scanf("%f", &idSector);

            nuevoEmpleado.idSector= idSector;

            nuevoEmpleado.isEmpty = 0;

            lista[indice] = nuevoEmpleado;



        }
    }

}


void bajaEmpleado(eEmpleado lista[], int tam, eSector sectores[], int tamsectores)
{

    int legajo;
    int indice;
    char seguir;

    system("cls");
    printf("  *** Baja empelado ***\n\n");

    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    indice = buscarEmpleado(lista, tam, legajo);

    if( indice == -1)
    {
        printf("No hay ningun empleado de legajo %d\n\n", legajo);
        system("pause");
    }
    else
    {
        mostrarEmpleado(lista[indice]);

        printf("\nConfima borrado s/n: ");
        fflush(stdin);
        scanf("%c", &seguir);

        if(seguir == 'n')
        {
            printf("Baja cancelada\n\n");

        }
        else
        {

            lista[indice].isEmpty = 1;
            printf("Borrado exitoso\n\n");
        }
        system("pause");
    }

}

void ModificarEmpleado(eEmpleado lista[], int tam, eSector sectores[], int tamsectores)
{
    int legajo;
    int indice;
    char seguir;
    float nuevoSueldo;

    system("cls");
    printf("  *** Modificar  empleado ***\n\n");

    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    indice = buscarEmpleado(lista, tam, legajo);

    if( indice == -1)
    {
        printf("No hay ningun empleado de legajo %d\n\n", legajo);
        system("pause");
    }
    else
    {
        mostrarEmpleado(lista[indice]);

        printf("\nModifica sueldo? s/n: ");
        fflush(stdin);
        scanf("%c", &seguir);

        if(seguir == 'n')
        {
            printf("Modificacion cancelada\n\n");

        }
        else
        {
            printf("Ingrese nuevo sueldo: ");
            scanf("%f", &nuevoSueldo);
            lista[indice].sueldo = nuevoSueldo;

            printf("Modificacion exitosa\n\n");
        }
        system("pause");
    }





}

void ordenarEmpleadosXlegajo(eEmpleado lista[], int tam)
{
    eEmpleado auxEmpleado;
    for(int i=0; i<tam-1; i++)
    {
        for(int j= i+1; j < tam; j++)
        {

            if( lista[i].legajo > lista[j].legajo)
            {
                auxEmpleado = lista[i];
                lista[i] = lista[j];
                lista[j] = auxEmpleado;

            }
        }
    }

    printf("Empleados oredenados con exito!!!\n\n");


}

void listarSectores (eSector sectores[], int tam)
{


    printf("id Descripcion\n");

    for (int i=0; i<tam; i++)
    {

        printf("%d   %10s", eSector[i].id, eSector[i].descripcion)
    }

}

void obtenerSector ( eSector sectores[], int tam, int idSector, char cadena[] )

{
    for (int i=0; i<tam; i++)
    {
        sectores.id[i]== idSector
        {
            strcpy(cadena, sectores.descripcion[i]);
        }
    }
}






/*void harcodearEmpleados (eEmpleado empleados [])
{

    eEmpleado x [] ={

     {1111, "juan", 'm', 23000, 0},
     {2222, "luis", 'm', 18000, 0},
     {1234, "ana", 'f', 21000, 0},
     {5643, "melisa", 'm', 24000, 0},


    } ;

    for (int i=0; i<6;i++)
    {
        empleados[i]= x[i];
    }

}*/



