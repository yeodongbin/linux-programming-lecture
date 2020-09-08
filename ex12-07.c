#include <….h>

#define SIZE    sizeof(struct sockaddr_in)

main()
{
    int sockfd;
    char send_c, recv_c;
    struct sockaddr_in server = {AF_INET, 5000};

    server.sin_addr.s_addr = inet_addr("127.0.0.1");

    if((sockfd = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
        printf("fail to call socket()\n");
        exit(1);
    }

    if(connect(sockfd, (struct sockaddr *)&server, SIZE) == -1) {
        printf("fail to call connect()\n");
        exit(1);
    }

    /* 메시지를 주고받는 부분 */
}