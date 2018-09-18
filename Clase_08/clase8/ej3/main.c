#include <stdio.h>
#include <stdlib.h>


// cuando tengo que realizar una mdificacion, llo bueno es que no tengo que modificar la funcion. solo cambio los valores de la estructura-

typedef struct

{
    int legajo;
    char nombre [30];
    int edad;
    int nota;
    float promedio;

} sAlumno;

void mostrarUnAlumno (sAlumno miAlumno);
// pra pedir datos de un valor.
sAlumno pedirAlumno();


int main()
{
    sAlumno miAlumno;


    /* printf("Ingrese legajo: ");
     scanf("%d", &miAlumno.legajo);

     printf("Ingrese nombre: ");
     fflush(stdin);
     gets(miAlumno.nombre);

     printf("Ingrese edad: ");
     scanf("%d", &miAlumno.edad);

     printf("Ingrese nota: ");
     scanf("%d", &miAlumno.nota);

     printf("Ingrese promedio: \n");
     scanf("%f", &miAlumno.promedio);

     mostrarUnAlumno (miAlumno);
     //parametro actual

     */


    miAlumno= pedirAlumno(miAlumno);
    //parametro actual

    mostrarUnAlumno (miAlumno);
    return 0;


}
void mostrarUnAlumno (sAlumno miAlumno)

//recibe parametro formal

{
    printf(" %d -- %s ----%d--- %d --- %.2f\n", miAlumno.legajo, miAlumno.nombre,miAlumno.edad, miAlumno.nota, miAlumno.promedio);
}


sAlumno pedirAlumno()

{

    sAlumno alumnito;

    printf("Ingrese legajo: ");
    scanf("%d", &alumnito.legajo);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(alumnito.nombre);

    printf("Ingrese edad: ");
    scanf("%d", &alumnito.edad);

    printf("Ingrese nota: ");
    scanf("%d", &alumnito.nota);

    printf("Ingrese promedio: \n");
    scanf("%f", &alumnito.promedio);

    return alumnito;
}
