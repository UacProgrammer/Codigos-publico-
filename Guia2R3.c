#include<stdio.h>
#include<stdbool.h>

int main()
{
    int diaActual;
    int mesActual;
    int anioActual;
    int diaSgte;
    int mesSgte;
    int anioSgte;
    bool fechaValida=true;

    puts("Este programa muestra la fecha correspondiente al dia siguientes a la fecha ingresada por el usuario\n");

    printf("Ingrese el dia: ");
    scanf("%d",&diaActual);
    printf("Ingrese el mes (1-12): ");
    scanf("%d",&mesActual);
    printf("Ingrese el anio (4 digitos): ");
    scanf("%d",&anioActual);

    diaSgte=diaActual+1;
    mesSgte=mesActual;
    anioSgte=anioActual;

    switch(mesActual)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
            if(diaActual>31)//Si es menor a 31 simplemente se cumple la formula de arriba
                fechaValida=false;
            if(diaActual==31)//Si el dato de ingreso es 31 entonces el dia siguiente sera 1 y el mes tmb sera mes actual+1
            {
                diaSgte=1;
                mesSgte=mesActual+1;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if(diaActual>30)
                fechaValida==false;
            if(diaActual==30)
            {
                diaSgte=1;
                mesSgte=1;
                anioSgte=anioActual+1;
            }
            break;
        case 12:
            if(diaActual>31)
                fechaValida==false;
            if(diaActual==31)
            {
                diaSgte=1;
                mesSgte=1;
                anioSgte=anioActual+1;
            }
            break;
        case 2:
            if(anioActual%4==0)//Febrero es diferente por q en anio bisiesto este cuenta con 29 dias
            {
                if(diaActual>29)
                    fechaValida==false;
                if(diaActual==29)
                {
                    diaSgte=1;
                    mesSgte=mesActual+1;
                }
            }
            else//si no es bisiesto
            {
                if(diaActual>28)
                    fechaValida==false;
                if(diaActual==28)
                {
                    diaSgte=1;
                    mesSgte=mesActual+1;
                }        
            }
            break;
        default:
            fechaValida=false;
            break;
    }

    if(fechaValida==true)
        printf("La fecha sera %d/%d/%d\n",diaSgte,mesSgte,anioSgte);
    else
        printf("Los datos ingresados no son correctos\n");
    return 0;
}