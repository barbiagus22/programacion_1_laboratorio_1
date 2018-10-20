#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vec[5];

   /* printf("Ingrese numero ");
    scanf("%d", (vec+0));

    printf("Ingrese numero ");
    scanf("%d", (vec+1));

     printf("Ingrese numero ");
    scanf("%d", (vec+2));

    printf("Ingrese numero ");
    scanf("%d", (vec+3));

    printf("Ingrese numero ");
    scanf("%d", (vec+4));
    */

     for (int i=0; i<5 ; i++)

    {
         printf("Ingrese un numero: ");
         scanf("%d", vec+i );
    }



    for (int i=0; i<5 ; i++)

    {
         printf(" \n %d ", *(vec+i));
    }




    return 0;
}
