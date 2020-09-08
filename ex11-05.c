#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

#define SIZE    512

main()
{
    int filedes[2];
    pid_t pid;

    if(pipe(filedes) == -1)
    {
        printf("fail to call pipe()\n");
        exit(1);
    }

    if((pid = fork()) == -1)
    {
        /* fork() 호출 실패 */
    }
    else if(pid > 0)
    {
        close(filedes[0]);
        /* filedes[1]을 지정하여 파이프에 메시지 쓰기 */
    }
    else
    {
        close(filedes[1]);
        /* filedes[0]을 지정하여 파이프로부터 메시지 읽기 */
    }
}