#include <unistd.h>
#include <stdio.h>

#define SIZE    512

main()
{
        char *msg1 = "apple is red";
        char *msg2 = "banana is yellow";
        char buffer[SIZE];

        int filedes[2];
        int nread;

        if(pipe(filedes) == -1)
        {
                printf("fail to call pipe()\n");
                exit(1);
        }

        write(filedes[1], msg1, strlen(msg1) + 1);
        write(filedes[1], msg2, strlne(msg2) + 1);

        nread = read(filedes[0], buffer, SIZE);
        printf("%d, %s\n", nread, buffer);

        nread = read(filedes[0], buffer, SIZE);
        printf("%d, %s\n", nread, buffer);
}