#include<stdio.h>

int main()
{
    int N;
    int i;
    int nroEvaluado=1;
    int divisores=0;

    puts("Este programa muestra los N primeros numeros perfectos\n");

    printf("Ingrese el valor de N: ");
    scanf("%d",&N);

    while(N>0)
    {
        divisores=0;
        for(i=1;i<nroEvaluado;i++)//va desde i hasta nroEvaluado
        {
            if(nroEvaluado%i==0)//solo saca los numeros perfectos
            {
                divisores=divisores+i;
            }
        }
        if(divisores==nroEvaluado)//si son numeros perfectos, entonces los muestra
        {
            printf("%d\n",nroEvaluado);
            N--;//se reduce a la cantidad de numeros a los N primeros
        }
        nroEvaluado++;
    }
    return 0;
}