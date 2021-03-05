#include<stdio.h>
#include<sys/types.h>

extern char **environ;

int main()
{
    pid_t forkReturn;

    puts("\n==== Este programa crea un proceso y muestra el id del proceso creado y del proceso");

    forkReturn=fork();
    if(forkReturn==0)
    {
        printf("Soy el proceso Hijo. Mi PID es %d\n",getpid());
    }
    else
    {
        printf("Soy el proceso Padre. Mi PID es %d\n",getpid());
    }
    return 0;
}