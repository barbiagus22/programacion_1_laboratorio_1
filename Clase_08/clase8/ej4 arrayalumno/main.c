#include <stdio.h>
#include <stdlib.h>
#define TAM 3

typedef struct

{
    int legajo;
    char nombre [30];
    int edad;
    int nota;
    float promedio;

} sAlumno;

sAlumno pedirAlumno();
void mostrarUnAlumno ( sAlumno [],   int     );
void  cargasrListadoDeAlumnos ( sAlumno [],  int    );


int main()
{
    sAlumno listadoMain[TAM];

    cargasrListadoDeAlumnos(  listadoMain,  TAM );

    mostrarUnAlumno(   listadoMain,  TAM );

    return 0;

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


void  cargasrListadoDeAlumnos ( sAlumno listadoMain [],  int tam )

{

    for (int i=0; i< tam; i++)
    {
       sAlumno listadoMain [i]= pedirAlumno();

    }

}



void mostrarUnAlumno ( sAlumno listadoMain [],   int  tam   )

{
    for (int i=0; i< tam; i++)

    {
        mostrarUnAlumno(sAlumno listadoMain [i]);
    }

}

