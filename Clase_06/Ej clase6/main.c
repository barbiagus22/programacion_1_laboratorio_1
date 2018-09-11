#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*

scanf: no permite espacoios/ se guarda el dato con %s / sin &- ya que las cadenas de caracteres son con pase de valores por referencia. /

se inicia con el tipo de variable + nombre + tamaño.

*/

int main()
{

    char nombre [10];

    printf("Ingrese su nombre: ");
    scanf("%s",nombre);


    printf("%s",nombre );

    return 0;
}
