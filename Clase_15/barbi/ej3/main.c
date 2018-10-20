#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int dia;
    int mes;
    int anio;

}eFecha;

typedef struct
{
    char nombre[20];
    float sueldo;
    int legajo;
    eFecha fecha;

}eEmpleado;

void cargarEmpleado ( eEmpleado* pEmployee);



int main()
{

    eEmpleado unEmpleado;

    //unEmpleado* eEmployee; sino lo paso a una funcion, sino se declara en la misma.
    cargarEmpleado(&unEmpleado); //accedo a la dieccion de memorio de un empleado.


    printf("Hello world!\n");
    return 0;
}


void cargarEmpleado ( eEmpleado* pEmployee)
{

            strcpy(pEmployee->nombre, "Julio");
            pEmployee->legajo=1000;
            pEmployee->sueldo=38000.50;
            pEmployee->fecha.dia=19;
            pEmployee->fecha.mes=10;
            pEmployee->fecha.anio=2018;

}

void mostrarEmpleado (eEmpleado* pEmployee)
{

    printf(" ")

}
