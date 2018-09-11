#include <stdio.h>
#include <stdlib.h>
#define TAM 8



void mostarVector ( char vec [], int tam );
void letrasOrdenadas ( char vec [], int tam , int criterio) ;


int main()
{

    char letras []= { 'd', 'c', 'a', 'f', 'A', 'c', 'z', 'Z' };
    int criterio;

    printf( "Ingrese 1 o 0  ");
    scanf( "%d", &criterio);



    mostarVector (letras, TAM ) ;

    letrasOrdenadas ( letras, TAM);
    mostarVector (letras, TAM ) ;



    return 0;


}

void mostarVector ( char vec [], int tam )

{
    for  ( int i =0; i< tam; i ++)

    {

        printf("%c ", vec [i] )  ;

    }

    printf (" \n\n");

}


void letrasOrdenadas ( char vec [], int tam , int criterio)

{
    int j, aux;
    int criterio;


    for ( int i=0 ; i< tam -1 ; i++   )
    {
        for ( j = i+1 ; j < tam ; j++ )
        {


            if ( vec [ i] > vec [ j] && criterio ==1)
            {
                aux = vec [ i];
                vec [ i] = vec [ j];
                vec [ j] = aux ;
            }

            if ( vec [ i] < vec [ j] && criterio ==0)
            {
                aux = vec [ i];
                vec [ i] = vec [ j];
                vec [ j] = aux ;
            }


        }

    }

}

















    /*

    los vectores al mostrarse para una funcion se pasan por referencia,




     */
