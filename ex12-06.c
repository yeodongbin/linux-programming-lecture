#include <….h>

#define SIZE    sizeof(struct sockaddr_in)


int sockfd_connect;

main()
{
    int sockfd_listen;
    char c;
    struct sockaddr_in server = {AF_INET, 5000, INADDR_ANY};

    if((sockfd_listen = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
        printf("fail to call socket()\n");
        exit(1);
    }

    if(bind(sockfd_listen, (struct sockaddr *)&server, SIZE) == -1) {
        printf("fail to call bind()\n");
        exit(1);
    }

    if(listen(sockfd_listen, 5) == -1) {
        printf("fail to call listen()\n");
        exit(1);
    }

    while(1) {
        if((sockfd_connect = accept(sockfd_listen, NULL, NULL)) == -1) {
            printf("fail to call accept()\n");
            continue;
        }

        /* sockfd_connect를 사용하여 통신을 수행 */

    }
}