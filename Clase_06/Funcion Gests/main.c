#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main( void)
{

    char nombre [25];

    printf( "Ingrese un nombre: \n ");
    gets(nombre);


    printf("Su nombre: %s", nombre);
    return 0;
}
