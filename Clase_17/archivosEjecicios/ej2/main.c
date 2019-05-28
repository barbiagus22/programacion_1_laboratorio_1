#include <stdio.h>
#include <stdlib.h>



int main()
{
   int numeros[]= {3,2,4,5,2,6,5,4,7,1,9,3};
   FILE* f;



        f= fopen("./numeros.txt", "w");

        if ( f== NULL)
        {
            printf("NO se pudo abrir el archivo.\n");
            exit(EXIT_FAILURE);
        }
        else
        {

            for ( int i =0; i<12 ; i++)
            {
                if((i+1)%4 != 0 )
                {

                 fprintf(f," %d\n", (numeros[i]));
                }
                else{

                    fprintf(f," %d\n", (numeros[i]));
                }

            }

        }


        fclose(f);

    return 0;
}


