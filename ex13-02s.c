#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#define SIZE    sizeof(struct sockaddr_in)
#define MSGSIZE 1024

main()
{
    int sockfd;
    char msg[MSGSIZE];

    struct sockaddr_in server = {AF_INET, 2007, INADDR_ANY};

    struct sockaddr_in client;
    int client_len = SIZE;

    sockfd = socket(AF_INET, SOCK_DGRAM, 0);

    bind(sockfd, (struct sockaddr *)&server, SIZE);

     recvfrom(sockfd, &msg, MSGSIZE, 0, (struct sockaddr *)&client, &client_len);

    printf("recv from client : %s\n", msg);

     sendto(sockfd, &msg, MSGSIZE, 0, (struct sockaddr *)&client, client_len);

    close(sockfd);
}