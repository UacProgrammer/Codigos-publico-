#include<stdio.h>

extern char **environ;

int main()
{
    char** var;

    puts("\n==== Este programa muestra informacion del entorno de un proceso ====\n");

    for(var=environ;*var!=NULL;++var)
        printf("%s\n",*var);
    return 0;
}