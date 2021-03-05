#include<stdio.h>

int main()
{
    int N=10;
    int arreglo[N];
    int numero;
    int i=0;
    double suma=0;

    puts("Este programa calcula la suma de los elementos de un arreglo");

    for(i=0;i<10;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",arreglo+i);
    }
    for(i=0;i<10;i++)
    {
        suma=suma+arreglo[i];//Bucle q realiza la suma
    }
    printf("La suma de los elementos del arreglo es %f \n", suma);
    return 0;
}