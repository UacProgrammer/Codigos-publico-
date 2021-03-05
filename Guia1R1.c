#include<stdio.h>

int main()
{
    int numero;
    float resultado;

    puts("Este programa calcula el cuadrado de un numero");

    printf("Ingrese un numero: ");
    scanf("%d",&numero);

    resultado=numero*numero;
    printf("El cuadrado de %d es %f\n", numero, resultado);
    return 0;
}