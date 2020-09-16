#include <unistd.h>
 
main()
{
    printf("before executing ls -l\n");
    execl("/bin/ls", "ls", "-l", (char *)0); //this process overload parent process
    printf("after executing ls -l\n");//not execute this code
}
