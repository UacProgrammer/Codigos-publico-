#include<stdio.h>
#include<stdbool.h>

int main()
{
    int diaActual;
    int mesActual;
    int anioActual;
    int diaAnt;
    int mesAnt;
    int anioAnt;
    bool fechaValida=true;

    puts("Este programa muestra la fecha correspondiente al dia siguientes a la fecha ingresada por el usuario\n");

    printf("Ingrese el dia: ");
    scanf("%d",&diaActual);
    printf("Ingrese el mes (1-12): ");
    scanf("%d",&mesActual);
    printf("Ingrese el anio (4 digitos): ");
    scanf("%d",&anioActual);

    diaAnt=diaActual-1;
    mesAnt=mesActual;
    anioAnt=anioActual;

    switch(mesActual)
    {
        
        case 3:
            if(anioActual%4==0)//Febrero es diferente por q en anio bisiesto este cuenta con 29 dias
            {
                if(diaActual<1)
                    fechaValida==false;
                if(diaActual==1)
                {
                    diaAnt=29;
                    mesAnt=mesActual-1;
                }
            }
            else//si no es bisiesto
            {
                if(diaActual<1)
                    fechaValida==false;
                if(diaActual==1)
                {
                    diaAnt=28;
                    mesAnt=mesActual-1;
                }        
            }
            break;
        
        case 5:
        case 7:
        case 10:
        case 12:
            if(diaActual<1)//Si es menor a 31 simplemente se cumple la formula de arriba
                fechaValida=false;
            if(diaActual==1)//Si el dato de ingreso es 31 entonces el dia siguiente sera 1 y el mes tmb sera mes actual+1
            {
                diaAnt=30;
                mesAnt=mesActual-1;
            }
            break;
        case 1:
            if(diaActual<1)
                fechaValida==false;
            if(diaActual==1)
            {
                diaActual=31;
                mesAnt=12;
                anioAnt=anioActual+1;
            }
            break;
        case 2:
        case 4:
        case 6:
        case 8:
        case 9:
        case 11:
            if(diaActual<1)
                fechaValida==false;
            if(diaActual==1)
            {
                diaActual=31;
                mesAnt=mesActual-1;
            }
            break;
        
        default:
            fechaValida=false;
            break;
    }

    if(fechaValida==true)
        printf("La fecha sera %d/%d/%d\n",diaAnt,mesAnt,anioAnt);
    else
        printf("Los datos ingresados no son correctos\n");
    return 0;
}