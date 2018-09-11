#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char clave [20];


    do {

    printf("Ingrese clave:  ");
    gets(clave);


        if (strcmp(clave,"Barbi") == 0 )

        // Si es igual a 0 significa q son iguales - si es menor la primer cadena es menor sino es mmayor/ no es lo mismo si ingresas may o min.

        //if (stricmp(clave,"Barbi") == 0 ) //NO diferencia mayusculas de minusculas
        {
            printf("correcta");
            break;
        }
        else
        {
            printf("incorrecta");
        }

    }while (clave != 0);




}
