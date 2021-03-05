#include<sys/types.h>
#include<stdio.h>


int main()
{
    pid_t id_proceso;
    pid_t id_padre;

    puts("\n==== Este programa muestra el identificador de proceso de un proceso y de si proceso padre ====\n");

    id_proceso=getpid();
    id_padre=getppid();

    printf("Identificador de proceso : %d\n", id_proceso);
    printf("Identificador del proceso padre : %d\n", id_padre);
    return 0;
}