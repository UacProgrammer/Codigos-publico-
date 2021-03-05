#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int ladoA;
    int ladoB;
    int ladoC;
    float area;
    float perimetro;
    float sp;
    bool esTriangulo=false;

    puts("Este programa determina el area y el perimetro de un triangulo\n");

    pritnf("Ingrese el primer lado: ");
    scanf("%d",&ladoA);
    pritnf("Ingrese el segundo lado: ");
    scanf("%d",&ladoB);
    pritnf("Ingrese el tercer lado: ");
    scanf("%d",&ladoC);

    if((ladoA+ladoB>ladoC)&&(ladoB+ladoC>ladoA)&&(ladoA+ladoC>ladoB))//si esto se cumple es triangulo
        esTriangulo=true;

    if (esTriangulo)
    {
        perimetro=ladoA+ladoB+ladoC;
        sp=perimetro/2;//semiperimetro
        area=sqrt(sp*(sp-ladoA)*(sp-ladoB)*(sp-ladoC));//formula de heron para calcular el area del triangulo cuando conocemos sus lados
        printf("El area del triangulo es %.2f\n",area);
        printf("El perimetro del triangulo es %6.3f\n",perimetro);
    }
    else
        printf("Los lados ingresados no forman un triangulo\n");
        return 0;
    
}