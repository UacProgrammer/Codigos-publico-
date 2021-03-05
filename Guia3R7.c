#include<stdio.h>
#include<sys/types.h>

int main()
{
    pid_t forkReturn;
    int i;
    int n=5;

    puts("\n==== Este programa crea N procesos Hijo y cada uno muestra su identificador y el de su padre ====\n");

    for(i=0;i<n;i++)
    {
        forkReturn=fork();
        if(forkReturn==0)
            break;
    }
    printf("%d; El padre del proceso %d es %d \n",i,getpid(),getppid());

    return 0;
}