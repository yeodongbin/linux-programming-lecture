#include <unistd.h>
#include <fcntl.h>

int main()
{
    int fdin, fdout;
    ssize_t nread;
    char buffer[1024];

    fdin = open("temp1.txt", O_RDONLY);
    fdout = open("temp2.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    /* 정상적으로 읽어 들인 내용이 1바이트 이상인 동안 반복문 수행 */
    while((nread = read(fdin, buffer, 1024)) > 0)
    {
        /* write가 비정상적으로 수행되었다. (실패) */
        if(write(fdout, buffer, nread) < nread)
        {
            close(fdin);
            close(fdout);
        }
    }

    /* 프로그램이 정상적으로 수행되었다. */
    close(fdin);
    close(fdout);
}
