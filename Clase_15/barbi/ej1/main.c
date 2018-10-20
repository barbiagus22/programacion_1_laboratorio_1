#include <stdio.h>
#include <stdlib.h>


void mifuncion ( int* x);


int main()
{
    int x = 5;

    mifuncion(&x);

    printf("%d\n", x);
    return 0;
}


void mifuncion ( int* x)

{

    *x=38;

}
