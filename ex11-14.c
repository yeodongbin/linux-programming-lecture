#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

#define MSGSIZE 64

main()
{
        char msg[MSGSIZE];
        int filedes;
        int cnt;

        if((filedes = open("./fifo", O_WRONLY)) < 0)
        {
                printf("fail to call open()\n");
                exit(1);
        }

        for(cnt = 0; cnt < 3; cnt++)
        {
                printf("input a message: ");
                scanf("%s", msg);

                if(write(filedes, msg, MSGSIZE) == -1)
                {
                        printf("fail to call write()\n");
                        exit(1);
                }
                sleep(1);
        }
}