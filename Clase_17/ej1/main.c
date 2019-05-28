#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10

typedef struct

{
    int id;
    char nombre [20];
    char apellido [20];
    float sueldo;
    int estado;

} eEmpleado;

void inicialiarEmpleados ( eEmpleado* vec, int tam);
eEmpleado* newEmpleado ();
eEmpleado* newEmpleadoParam ( int id, char* nombre,  char* apellido, float sueldo  );
int buscarLibre ( eEmpleado* vec, int tam);
void mostrarEmpleado ( eEmpleado* emp);
void mostrarEmpleados ( eEmpleado* vec, int tam);
int menu ();
void altaEmpleado ( eEmpleado* vec, int tam);
void imprimirEmpleados ( eEmpleado* vec, int tam);
void guardarEmpleadosBinarios ( eEmpleado* vec, int tam);
void cargarEmpleado ( eEmpleado* vec, int tam);





int main()
{
    char seguir= 's';
    //eEmpleado lista[TAM];  // array estatico de empleados. lo inicialiazo
    eEmpleado* lista=  (eEmpleado*) malloc( sizeof(eEmpleado)); // LISTA ES ESTATICO, CON MALLOC LO CONSIGIO ESTPACIO EN MEMORIA DINAMICA Y ME DEVUELVE EL PNTERO QUE LO ASIGNO EN LISTA. GUARDA LA
    //DIRECCION DE MEMORIA DEL PRIMER ELEMENTO

    if (lista==NULL )
    {
        printf("no SE CONSIGIO MEMORIA\n");
        system("pause");
        exit(EXIT_FAILURE);
    }


    inicialiarEmpleados(lista, TAM);

    printf("eMPLEADOS INICIALIZADOS\n\n");

    do
    {

        switch ( menu())
        {
        case 1:
            cargarEmpleado(lista,TAM);
            system("pause");
            break;
        case 2:
            altaEmpleado(lista,TAM);
            system("pause");
            break;
        case 3:
            mostrarEmpleados(lista,TAM);
            system("pause");
            break;
        case 4:
            guardarEmpleadosBinarios(lista,TAM);
            system("pause");
            break;
        case 5:
            imprimirEmpleados(lista,TAM);
            system("pause");
            break;
        case 6:
            seguir= 'n';
            break;






        }
    }
    while(seguir=='s');


    return 0;
}

void inicialiarEmpleados ( eEmpleado* vec, int tam)
{
    // siempre validar que sea distinto de null
    for ( int i =0; i<tam ; i++)
    {
        (vec+i)->estado=0;

    }


}


eEmpleado* newEmpleado ()
{

    eEmpleado* emp = (eEmpleado*) malloc(sizeof(eEmpleado));
    if (emp != NULL)
    {
        emp->estado=0;
        strcpy(emp->nombre, " ");
        strcpy(emp->apellido, " ");
        emp->sueldo=0;
        emp->estado=0;
    }

    return emp;
}


eEmpleado* newEmpleadoParam ( int id, char* nombre,  char* apellido, float sueldo  )

{


    eEmpleado* emp = (eEmpleado*) malloc(sizeof(eEmpleado));
    if (emp != NULL)
    {
        emp->id=id;
        strcpy(emp->nombre, nombre);
        strcpy(emp->apellido, apellido);
        emp->sueldo=sueldo;
        emp->estado=1;

    }

    return emp;
}


int buscarLibre ( eEmpleado * vec, int tam)
{

    int indice=-1;
    if (vec != NULL && tam>0)
    {
        for ( int i =0; i<tam ; i++)
        {
            if ((vec+i)->estado==0 )
            {
                indice =i;
                break;
            }


        }
    }


    return indice;


}

void mostrarEmpleado ( eEmpleado* emp)
{

    if ( emp != NULL)
    {
        printf(" %d %s %s %0.2f \n", emp->id, emp->nombre, emp->apellido, emp->sueldo);
    }



}

int menu ()
{
    int opcion;

    system("cls");
    printf("Menu de opcione\n\n");
    printf("1- Cargar empleado\n");
    printf("2- Alta empleado\n");
    printf("3- Listar empleado\n");
    printf("4- Guardar empleados archivo\n");
    printf("5- Imprimir empleados\n");
    printf("6- Salir\n");

    printf("INgrese opcion:");
    scanf("%d", &opcion);

    return opcion;

}


void altaEmpleado ( eEmpleado* vec, int tam)
{


    int indice;
    int auxInt;
    char auxCard [20];
    char auxCard2 [20];
    float auxFloat;

    indice= buscarLibre(vec, tam);
    if ( indice==-1)
    {
        printf("No hay lugar\n");
    }
    else
    {
        printf("Ingrese id: "); // pido los datos de forma estatica
        scanf("%d", &auxInt);

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(auxCard);

        printf("Ingrese apellido: ");
        fflush(stdin);
        gets(auxCard2);

        printf("Ingrese sueldo: "); // pido los datos de forma estatica
        scanf("%f", &auxFloat);


        eEmpleado* nuevoEmpleado = newEmpleadoParam(auxInt, auxCard,auxCard2,auxFloat);

        if (nuevoEmpleado!= NULL)
        {
            *(vec+indice)= *nuevoEmpleado;// el valor guardo en esa direccion de memoria. VEC es la direccion de memoria, y el indice es el primer lugar vaciom.
            free(nuevoEmpleado);
        }
    }



}


void mostrarEmpleados ( eEmpleado* vec, int tam)
{


    if (vec != NULL && tam>0)
    {
        printf("Id  Nombre  Apellido  Sueldo\n\n");

        for ( int i =0; i<tam ; i++)
        {
            if ( (vec + i)->estado == 1 )
            {
                mostrarEmpleado (vec + i);
            }


        }
    }


}


void guardarEmpleadosBinarios ( eEmpleado* vec, int tam)
{

    FILE*f;

    if (vec != NULL && tam>0)
    {
        f= fopen("./Empleados.bin", "wb");

        if ( f!= NULL)
        {

            for ( int i =0; i<tam ; i++)
            {
                if (   (vec + i)->estado == 1 )
                {
                    fwrite((vec+i),sizeof(eEmpleado), 1, f );

                }

            }


        }
        fclose(f);




    }


}



void imprimirEmpleados ( eEmpleado* vec, int tam)
{

    FILE*f;

    if (vec != NULL && tam>0)
    {
        f= fopen("./ListaEmpleados.txt", "w");

        if ( f!= NULL)
        {

            for ( int i =0; i<tam ; i++)
            {
                if (   (vec + i)->estado == 1 )
                {
                     fprintf(f," %d %s %s %0.2f \n" ,(vec+i)->id ,(vec+i)->nombre,(vec+i)->apellido, (vec+i)->sueldo );

                }

            }
            fprintf(f, "\n\n");



        }
        fclose(f);




    }


}





void cargarEmpleado ( eEmpleado* vec, int tam)
{

    int indice;
    int cant;
    FILE* f;

    /// levanto los datos de un archivo

    f= fopen("./Empleados.bin", "rb" ); // validar que sea distinto de null

    while ( !feof(f))

    {
        indice= buscarLibre(vec, tam);
        cant = fread((vec+indice), sizeof(eEmpleado),1,f );

          if( cant < 1){
        if(feof(f)){

            break;
        }
        else{
            printf("Problemas para leer el archivo");
        }
       }

        }
        //recorro el array mientrars no haya llegado al final del fichero.
        fclose(f);

    }


