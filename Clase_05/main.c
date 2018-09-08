#include <stdio.h>
#include <stdlib.h>

int main()
{
   {
      char respuesta='s';
      int numero;
      int indice;
      int vector[5] = {0};


     do
     {

         printf("Ingrese numero: ");
         scanf("%d", &numero);

         printf("Ingrese indice: ");
         scanf("%d", &indice);

         vector[indice]=numero;



         printf("Continuar: ");
         fflush(stdin);
         scanf("%c", &respuesta);





     }while (respuesta== 's');


     for (int i=0;i<5;i ++)
    {

       printf( "%d \n\n ",vector[i]);

    }









    return 0;
}
