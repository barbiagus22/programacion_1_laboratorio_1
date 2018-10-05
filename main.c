#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayEmployees.h"
#define TAM 3
#define VACIO -1
#define OCUPADO 0


int main()
{


    sEmployee empleados[TAM];
    //int idAut=1;
    char continuar='s';
    int alta;


    initEmployees(empleados,TAM);

    system("cls");

    do
    {
        switch(menu())
        {
        case 1:
            alta=addEmployees(empleados, TAM);
            // una vez que se verifica que hay espaiion libe y cargo los datos,
            // si aesta cargado dsp del if . encuentra. oncrementa-
            break;


        case 4:
            printEmployeess(empleados, TAM);

            system("pause");
            break;
        case 6:
            printf("Salir");
            continuar='n';
            break;
        }

    }
    while(continuar== 's');


    return 0;
}

