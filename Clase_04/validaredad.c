#include <stdio.h>
#include "validaredad.h"

int getInt ( char mensaje[] , char mensajeerror[], int lmin, int lsup)

{

int edad;


printf("%s\n", mensaje);
scanf("%d", &edad);

while (edad < lmin || edad > lsup)
{
  printf("%s\n",  mensajeerror);
    scanf( "%d", &edad);
}

return edad;

}

