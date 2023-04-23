#include <stdio.h>
#include <sys/types.h>
#include <process.h>

int main()
{
    write(1, "hello, world\n", 13);
    _exit(0);
    
    //printf("Hello World");
    //return 0; 
}