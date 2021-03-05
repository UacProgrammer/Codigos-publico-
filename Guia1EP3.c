#include <math.h>
#include <stdio.h>

int main()
{
    double x1,y1,x2,y2,f1,f2,x3,y3,x4,y4;
    printf("Ingrese x1: ");
    scanf("%lf",&x1);
    printf("Ingrese y1: ");
    scanf("%lf",&y1);
    printf("Ingrese x2: ");
    scanf("%lf",&x2);
    printf("Ingrese y2: ");
    scanf("%lf",&y2);

    puts("Ingrese los datos de la segunda recta");
    printf("Ingrese x1: ");
    scanf("%lf",&x3);
    printf("Ingrese y1: ");
    scanf("%lf",&y3);
    printf("Ingrese x2: ");
    scanf("%lf",&x4);
    printf("Ingrese y2: ");
    scanf("%lf",&y4);
    f1=sqrt(pow(x1,2)+pow(y1,2)+pow(x2,2)+pow(y2,2));
    f2=sqrt(pow(x3,2)+pow(y3,2)+pow(x4,2)+pow(y4,2));
    printf("La longitud de la primera linea es %lf\n",f1);
    printf("La longitud de la segunda linea es %lf\n",f2);
    if(f1>f2)
    {
        printf("La linea primera es de mayor longitud %lf\n :",f1);
    }else if(f1<f2){
        printf("La linea segunda es de mayor longitud %lf\n :",f2);
    }
    if(f1==f2)
    {
        printf("Ambas tiene la misma longitud");
    }
}
