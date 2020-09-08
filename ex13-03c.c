#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#define SIZE    sizeof(struct sockaddr_in)
#define MSGSIZE 1024

main()
{
    int sockfd;
    char msg[MSGSIZE], recv[MSGSIZE];

    struct sockaddr_in client = {AF_INET, INADDR_ANY, INADDR_ANY};

    int server_len = SIZE;
    struct sockaddr_in server = {AF_INET, 2007};
    server.sin_addr.s_addr = inet_addr("202.31.200.87");

    sockfd = socket(AF_INET, SOCK_DGRAM, 0);

    strcpy(msg, "Hello world!");

     sendto(sockfd, &msg, MSGSIZE, 0, (struct sockaddr *)&server, server_len);

     recvfrom(sockfd, &recv, MSGSIZE, 0, (struct sockaddr *)&server, &server_len);

    printf("reply from server: %s\n", recv);

    close(sockfd);
}