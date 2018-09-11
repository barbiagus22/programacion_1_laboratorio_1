#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre [20]= {" MaRIana INES "};
    char apellido [20]= {" PeRez "};
    char nombreCompleto [40]= {};

    strcpy(nombreCompleto,nombre );
    strcat (nombreCompleto, " ");
    strcat(nombreCompleto,apellido );

    printf("\n");

    strlwr (nombreCompleto);
    printf( "%s \n", nombreCompleto );

    printf("\n");



    nombreCompleto[0]= toupper (nombreCompleto[0]);

    int cant = strlen (nombreCompleto);

    for ( int i=0 ; i< cant ; i++)

    {
        if (nombreCompleto [i] == ' ' )

        {
            nombreCompleto [i+1]= toupper (nombreCompleto [i+1]);
        }

    }

    printf( "%s \n\n", nombreCompleto );



   strupr(nombreCompleto);
   printf( "%s \n", nombreCompleto );








    return 0;
}
