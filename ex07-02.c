#include <unistd.h>
#include <sys/types.h>

main()
{
    pid_t pid;
    int i = 0;

    i++;
    printf("before calling fork(%d)\n", i);

    pid = fork();    /* fork 호출이 성공하면 자식 프로세스가 생성된다. */

    if(pid == 0)
        /* 자식 프로세스가 수행할 부분 */
        printf("child process(%d)\n", ++i);
    else if(pid > 0)
        /* 부모 프로세스가 수행할 부분 */
        printf("parent process(%d)\n", --i);
    else
        /* fork 호출이 실패할 경우 수행할 부분 */
        printf("fail to fork\n");

}
