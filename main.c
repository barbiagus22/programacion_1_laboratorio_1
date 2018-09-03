#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float ingresarOperando1 ( float operando1);
float ingresarOperando2 ( float operando2);
float suma ( float operando1, float operando2);
float resta (float operando1, float operando2);
float division(float operando1, float operando2);
float multiplicacion(float operando1, float operando2);


int main()
{
    int menu=5,banderaA=0,banderaB=0;
    float numeroA,numeroB,Calculo1,Calculo2,Calculo3,Calculo4;

    do {
    system("cls");
    printf(" \n >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<< MENU >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>   \n\n ");

    if (banderaA==1 )
        {
        printf("1 . Ingrese 1er operando ( A = %0.2f ) \n\n ", numeroA);
        }
    else
        {
        printf("1 . Ingrese 1er operando ( A = x ) \n\n ");
        }

    if (banderaB==1 )
        {
        printf("2 . Ingrese 2do operando ( B = %0.2f ) \n\n ", numeroB);
        }
    else
        {
        printf("2 . Ingrese 2do operando ( B = y ) \n\n ");
        }

    printf("3 . Calcule  (+ , - , * , / ) \n\n");
    printf(" 4 . Resultado   \n\n");
    printf(" 5 . Salir  \n\n");
    printf( "\n INGRESE UNA OPCION DEL MENU:  \n\n ");
    scanf ("%d", &menu);


     switch (menu)
     {
        case 1:
            system("cls");
            numeroA= ingresarOperando1(numeroA);
            banderaA=1;
        break;
        case 2:
            system("cls");
            numeroB= ingresarOperando2(numeroB);
            banderaB=1;
        break;
        case 3:
            if  ( banderaA ==1 && banderaB==1)
            {
            Calculo1=suma(numeroA,numeroB);
            Calculo2=resta(numeroA,numeroB);
            Calculo3=division(numeroA,numeroB);
            Calculo4=multiplicacion(numeroA,numeroB);
            }
        else
            {
            printf(" Falta ingresar un operando \n");
            }
            system("cls");
            printf( " Calculando operaciones \n\n ");
            system("\n Pause");
            break;
    case 4:
            system("cls");
            printf ("La suma es : %0.2f \n",Calculo1);
            printf ("La resta es : %0.2f \n",Calculo2);
            printf ("La division es : %0.2f \n",Calculo3);
            printf ("La multiplicacion es : %0.2f \n\n",Calculo4);
            system("\n Pause");
            system("cls");
            break;
    case 5:
            system("cls");
            printf(" Apagando");
            system("\n Pause");
            break;
    }


    }while (menu != 5);
    return 0;
}

float ingresarOperando1 ( float operando1)

    {
    printf( " \n Ingrese 1er operando ( A = x ):   \n\n ");
    scanf( "%f", &operando1);
    return operando1;
    system("cls");
    }

float ingresarOperando2 ( float operando2)
    {
    printf( " \n Ingrese 2do operando ( B = y ):   \n\n ");
    scanf( "%f", &operando2);
    return operando2;
    system("cls");
    }

float suma( float operando1, float operando2)

    {
    float suma;
    suma= operando1 +operando2;
    return suma;
    }
float resta(float operando1, float operando2)
    {
    float resta;
    resta= operando1-operando2;
    return resta;
    }

float division(float operando1, float operando2)
    {
    float division;
    division= operando1/operando2;
    return division;
    }

float multiplicacion(float operando1, float operando2)
    {
    float multiplicacion;
    multiplicacion= operando1*operando2;
    return multiplicacion;
    }



