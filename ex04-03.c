#include <stdio.h>
#include <fcntl.h>   //open
#include <unistd.h>  //close

int main()
{
    int filedes;

    filedes = open("test.txt", O_RDWR);

    printf("%d \n", filedes);

    close(filedes);
}