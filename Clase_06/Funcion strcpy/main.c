#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{

    char texto [20];
    char texto1 [20];
    char textoCompleto[40];
    int cantidaddeLetras;

    printf(" Ingrese una 1er frase: ");
    gets(texto);
    strcpy (textoCompleto,texto); // se pega a la varianble texto completo-

    printf(" Ingrese una 2da frase: ");
    gets(texto1);
    strcat (textoCompleto,texto1); // STRCAT Concatena

    printf(" La frase es: %s  %s \n\n", textoCompleto);

    cantidaddeLetras= strlen(textoCompleto); // Se inicializa una variable int y se iguala a strlen-( nombre del vector. )

    printf(" La cantidad de letras (sumando espacios) es : %d \n", cantidaddeLetras);

    strupr (textoCompleto); // pASA A mayuscaulas todo el tecto.
    printf("  %s \n", textoCompleto);

    strlwr(textoCompleto);
    printf("  %s \n", textoCompleto); // Pasa todo a minuscula












    return 0;
}
