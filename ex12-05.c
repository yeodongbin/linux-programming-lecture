#include <...h>

#define SIZE    sizeof(struct sockaddr_in)

main()
{
    int sockfd_listen;
    char c;
    struct sockaddr_in server = {AF_INET, 5000, INADDR_ANY};

    /* socket()을 호출하는 부분 */

    /* bind()를 호출하는 부분 */

    if(listen(sockfd_listen, 5) == -1) {
        printf("fail to call listen()\n");
        exit(1);
    }

    /* 통신을 수행하는 부분 */
} 