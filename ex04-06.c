#include <sys/types.h>

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    if(chown("test.txt", 2045, 200) == -1)
        exit(1);
    printf("rest of program ...\n");
}
