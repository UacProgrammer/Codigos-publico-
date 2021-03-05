#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *home=NULL;

    puts("\n==== Este programa muestra el contenido de la variable home del sistema ====\n");

    home=getenv("Home");
    if(home==NULL)
        printf("Home no de encuentra definida\n");
    else
        printf("El valor de Home es %s\n",home);
    return 0;
}