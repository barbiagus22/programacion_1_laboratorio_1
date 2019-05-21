#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pNum;

    pNum= (int*) malloc (sizeof(int));

    if(pNum== NULL)
    {
        printf("NO SE CARGO MEMORIA");
        exit (1);
    }


    *pNum=5;

    printf("%d" ,*pNum);

    free(pNum);

    return 0;
}
