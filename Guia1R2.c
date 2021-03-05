#include<stdio.h>

int main()
{
    float numero=0;
    float acumulador=0;
    int contador=0;
    float promedio=0;

    puts("Este programa calcula el promedio de n numeros positivos");

    while(numero>=0)
    {
        printf("Ingrese un numero (-1 para terminar): ");
        scanf("%f",&numero);
        if(numero>=0)
        {
            acumulador=acumulador+numero;//Suma de los numeros
            contador++;
        }
    }
    if(contador!=0){
        promedio= acumulador/contador;
    }
    printf("El promedio de los %d numeros es %f\n", contador, promedio);
    return 0;
}