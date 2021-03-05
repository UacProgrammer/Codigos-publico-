#include<stdio.h>
#include<sys/types.h>

int main()
{
    puts("\n==== Este programa muestra informacion del usuario que ejecuta el proceso ====\n");

    printf("Identificador de usuario : %d\n",getuid());
    printf("Identificador de usuario efectivo : %d\n",geteuid());
    printf("Identificador del grupo: %d\n",getgid());
    printf("Identificador de grupo efectivo : %d\n",geteuid());

    return 0;
    
}