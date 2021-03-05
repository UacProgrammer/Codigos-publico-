#include <stdio.h>

int main()
{
    int num, i, sum=0;
    printf("Ingrese un numero: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("La suma es: %d", sum);
    return 0;
}
