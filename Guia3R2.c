#include<stdio.h>
#include<sys/types.h>

int main(int argc, char *argv[])
{
    char *nombreDePrograma=argv[0];
    pid_t processId;

    puts("\n=== Este programa muestra su nombre y su identificacion de proceso ===\n");

    processId=getpid();

    printf("Mi nombre de programa es: %14s\n",nombreDePrograma+2);
    printf("Mi identificacion es: %6d\n\n",processId);
    return 0;
}