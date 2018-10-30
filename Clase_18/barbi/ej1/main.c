#include <stdio.h>
#include <stdlib.h>



int main()
{

    FILE *pFILE;

    int r;
    //int a, b, c, d;

    pFILE = fopen("actor.csv", "r");
    if (pFILE == NULL)
    {
        printf("El archivo no existe");
        exit(1);
    }


    fclose(pFILE);


    return 0;
}
