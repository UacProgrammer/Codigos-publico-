#include <stdio.h>

int main()
{
    int a[6],max=a[0],min=a[0],sum=0,prom=0,fre[6],i;
    for(i=0;i<6;i++){
        printf("Ingrese un numero : ",a);
        scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++){
        if(max<a[i]){
            max=a[i];
        }if(min>a[i]){
            min=a[i];
        }
    }
    for(i=0;i<6;i++){
        if(a[i]==min){
            a[i]=max;
        }
    }
    for(i=0;i<6;i++){
        if(a[i]==max){
            a[i]=min;
        }
    }
    for(i=0;i<6;i++){
        sum+=a[i];
        
    }
    prom=sum/6;
    printf("El valor maximo es: %d \n",max);
    printf("El valor minimo es: %d \n",min);
    printf("El promedio es: %d \n",prom);
    printf("La frecuencua es: %d \n",fre[i]);
    return 0;
}
