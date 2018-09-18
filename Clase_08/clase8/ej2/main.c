#include <stdio.h>
#include <stdlib.h>
typedef struct

{
    int legajo;
    char nombre [30];
    int nota;
    float promedio;

}sAlumno;

int main()
{
    sAlumno miAlumno;// nombre de estructura espacio nombre de variable.
    sAlumno otroAlumno;

    printf("Ingrese legajo: ");
    scanf("%d", &miAlumno.legajo);

    // se guardan con &.... nombre de variable mas la direccion de memoria donde se encuentra.  para el nombre al ser vector va sin
    //ampersan.  se ingreseça miAlumno.nombre.

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);
    // cuando pido nombre se ingresa gets.

    printf("Ingrese nota: ");
    scanf("%d", &miAlumno.nota);

    printf("Ingrese promedio: \n");
    scanf("%f", &miAlumno.promedio);

    otroAlumno=miAlumno;// las estructuras se pasan por valor. Se pueden asignar entre si.

    /*
    1er propiedad:   se pueden asignar entre si.
    2da ropiedad:   no se pueden comparar estructuras.
    */

    printf(" %d -- %s --- %d --- %.2f\n", miAlumno.legajo, miAlumno.nombre, miAlumno.nota, miAlumno.promedio);

    printf("%d -- %s --- %d --- %.2f\n", otroAlumno.legajo, otroAlumno.nombre, otroAlumno.nota, otroAlumno.promedio);
    // se mustra como nombre de variablle . variable que qiero mostrar.


    //pedir enteros, legajos. flotantes cadenas char... para pedir valores. generar en biblioteca. en campus verificar que figura como crear bibliotecas.
    //usar lo que fuimos programardo durante el cuatrimestr.e  armar bibliotecas si si.
    // que la cad no exeda el largo que el numero qe ingrese este dentro del rango.  que no ingresen letras .
    return 0;
}
