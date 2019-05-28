#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char nombre[20];
    char apellido[20];
    float sueldo;

}eEmpleado;



int main()
{
    eEmpleado* lista = (eEmpleado*) malloc(sizeof(eEmpleado));
    eEmpleado* auxEmpleado;
    int cont=0;

    FILE* f;

    int cant;

   char buffer [4][30];

    f= fopen("./numeros.txt", "r");

        if ( f == NULL)
        {
            printf("NO se pudo abrir el archivo.\n");
            exit(EXIT_FAILURE);
        }

    while( !feof(f))
    {

        cant= fscanf(f ,"%[^,], %[^,], %[^,],%[^\n],\n" , buffer[0],  buffer[1], buffer[2], buffer[3]);// no es una buena practica mezclar %d %s.
        printf( "%d %s %s %d \n", atoi(buffer[0]), buffer[1], buffer[2], atoi(buffer[3]) );


        if ( cant<4)
        {
            if (feof(f))
            {
              break;
            }
            else
            {
                printf("Problemas para leer el archivo.\n");


            }
        }
        (lista+cont)->id= atoi(buffer[0]);
        strcpy( (lista+cont)->nombre, buffer[1]  );
        strcpy ( (lista+cont)->apellido, buffer[2]  );
        (lista+cont)->sueldo= atof(buffer[3]);
        cont++;
        auxEmpleado= (eEmpleado*) realloc(lista, sizeof(eEmpleado)* (cont+1));
        if (auxEmpleado!= NULL)
        {
            lista=auxEmpleado;
        }

       fclose(f);



    }


    return 0;
}
