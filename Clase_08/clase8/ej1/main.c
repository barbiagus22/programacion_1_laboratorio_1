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
    sAlumno miAlumno={ 105, "Juan",10, 4.65};

    printf("%d -- %s --- %d --- %f\n", miAlumno.legajo, miAlumno.nombre, miAlumno.nota, miAlumno.promedio);
    return 0;
}
