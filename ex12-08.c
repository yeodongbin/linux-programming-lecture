
#define SIZE    sizeof(struct sockaddr_in)

int sockfd_connect;

main()
{
    /* sock_listen 소켓 생성 */
    /* sock_listen으로 bind 호출 */
    /* sock_listen으로 listen 호출 */

    while(1) {

        /* accept를 호출하여 sockfd_connet를 생성 */

        while(recv(sockfd_connect, &c, 1, 0) > 0)
            send(sockfd_connect, &c, 1, 0);

        close(sockfd_connect);
    }
}