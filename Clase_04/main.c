#include <stdio.h>
#include <stdlib.h>
#include "validaredad.h"

//  int getInt ( char mensaje[] , char mensajeerror[], int lmin, int lsup);

int main()
{
    char mensaje[20]= "Ingrese edad: ";
    char mensajeerror[20]= "Reingrese edad: ";
    int lmin=0;
    int lsup=100;
    int edadValidada;

    edadValidada= getInt("Ingrese edad", mensajeerror,lmin,lsup);
    printf(" La edad validad es: %d ",edadValidada);

    return 0;
}
/*
int getInt ( char mensaje[] , char mensajeerror[], int lmin, int lsup)
{
    int edad;

    printf("Ingrese edad\n");
    scanf("%d", &edad);

    while (edad < lmin || edad > lsup)
    {
        printf("Reingrese edad: ");
        scanf( "%d", &edad);
    }

    return edad;

}
*/
