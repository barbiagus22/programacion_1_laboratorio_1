#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#define VACIO -1
#define OCUPADO 0


int menu()
{
    int opcion;

    system("cls");
    printf("\n*** Menu de Opciones : Nomina Empleados ***\n\n");
    printf(" 1- Alta\n");
    printf(" 2- Baja\n");
    printf(" 3- Modificacion\n");
    printf(" 4- Listar Empleados\n");
    printf(" 5- Ordenar Empleados\n");
    printf(" 6- Salir\n\n\n");
    printf(" Ingrese opcion:  ");
    scanf("%d", &opcion);

    return opcion;
}


void initEmployees ( sEmployee empleados [], int tam)
{
    for (int i=0 ; i< tam; i++)
    {
        empleados[i].isEmpty= VACIO;
    }
}

void mostrarEmpleado (sEmployee  empleado)

{
    printf("%d --- %s ---%s--- %f--- %d---\n\n ", empleado.id,empleado.name, empleado.lastname, empleado.salary, empleado.sector );

}

void printEmployeess (sEmployee empleados [], int tam)
{
    system("cls");
    printf("Id  Nombre Apellido Sueldo Salario Sector \n\n");

    for (int i=0; i<tam ; i++)
    {
        mostrarEmpleado(empleados[i]);

        /* if( empleados[i].isEmpty == OCUPADO)
         {

         }*/

    }
    system("pause");
}


int buscarLibre( sEmployee empleados [], int tam)

{
    int index= -1;

    for (int i= 0 ; i<tam; i ++)
    {
        if (empleados[i].isEmpty== OCUPADO)
        {
            index=0;
        }
    }
    return index;
}

int findEmployeeById( sEmployee unEmpleado [], int tam, int idAut )

{
    int index= -1 ;

    for (int i=0 ; i<tam ; i++)
    {
        if ( unEmpleado[i].id  ==idAut && unEmpleado[i].isEmpty== OCUPADO)
        {
            index=i;
            break;
        }
    }
    return index;
}



int addEmployees ( sEmployee empleados [], int tam)

{

    int indice;
    int existe;
    int idAut=1;
    sEmployee nuevoEmpleado;

    system("cls");
    printf(" **** Alta empleado **** \n\n");

    indice = buscarLibre(empleados, tam);

    if (indice != -1 )
    {
        printf("No hay lugar en el sistema\n\n");
        system("pause");
    }

    else
    {
        existe = findEmployeeById(empleados, tam, idAut);

        if( existe != -1)
        {

            printf("Ya existe un empleado con ese Id %d\n", idAut);
            mostrarEmpleado(empleados[existe]);
            system("pause");

        }
        else
        {
            nuevoEmpleado.id = idAut;
            printf(" %d ",idAut  );

            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(nuevoEmpleado.name);
            printf("Ingrese apellido: ");
            fflush(stdin);
            gets(nuevoEmpleado.lastname);
            printf("Ingrese sueldo: ");
            fflush(stdin);
            scanf("%f", &nuevoEmpleado.salary);
            printf("Ingrese sector: ");
            fflush(stdin);
            scanf("%d", &nuevoEmpleado.sector);


            nuevoEmpleado.isEmpty = 0;

           // empleados[indice] = nuevoEmpleado;
        }
    }


    /*
                printf(" Desea realizar un NUEVO ALTA?.  SI= s  NO= n  :  ");
                fflush(stdin);
                scanf("%c", &seguir);

            }
            while(seguir == 's');
    */

    return indice;
}





/*if (index== -1 )
{
    empleados[index] = altaempleado();
    empleados[index].isEmpty=OCUPADO;


    system("pause");

}
else
{

    printf(" No hay espacio , solicite asistencia tecnica!");

    system("pause");
}
*/


/*
{else if (flag!=0 )

        printf("\nIngrese Id:  ");
        scanf(" %d", &empleado.id);

        alta = findEmployeeById(altaEmpleado, tam, idAut);
        if ( alta!= -1 )
        {

            printf("Ya existe un empleado con ese Id %d", &idAut);
            mostrarUnempleado(altaEmpleado[alta]);
            system("pause");
        }

        else
        {

            altaEmpleado[alta]= altaempleado(idAut);
            idAut++;

            printf("Finalizo la carga. Desea continuar? \n\n s = SI . n = NO ");
            fflush (stdin);
            scanf("%c", &continuar);
            break;
        }
    }*/

/* else

  {
      system("cls");
      printf(" **** Alta empleado **** \n\n");

      altaEmpleado[alta]= altaempleado(idAut);
      idAut++;
        empleado.isEmpty=OCUPADO;
      altaEmpleado [index]= empleado;



  }*/



// empleado.isEmpty=0;
//altaEmpleado [index]= empleado;






sEmployee altaempleado ()

{
    sEmployee empleado;

    system("cls");

    printf("\n\n ****  ALTA DE EMPLEADOS  **** \n\n");

    //empleado.id=idAut;

    printf("ID Empleado: %d\n", empleado.id);

    printf("\nIngrese Nombre:  ");
    fflush (stdin);
    gets (empleado.name);

    printf("\nIngrese Apellido: ");
    fflush (stdin);
    gets(empleado.lastname);

    printf("\nIngrese Salario: ");
    scanf("%f", &empleado.salary);

    printf("\nIngrese Sector:  ");
    scanf(" %d", &empleado.sector);


    //empleado[indice].id= idAut;

    return empleado;
}






