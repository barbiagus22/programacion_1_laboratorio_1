#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pNum;

    pNum= (int*) malloc (sizeof(int)*5);

    if(pNum== NULL)
    {
        printf("NO SE CARGO MEMORIA");
        exit (1);
    }

    for (int i=0;i<5; i++)
    {

        printf("Ingrese un numero: ");
        scanf("%d", pNum+i);

    }

    for (int i=0;i<5; i++)
    {

         printf("%d \n" ,*(pNum+i));
    }



    free(pNum);

    return 0;
}
