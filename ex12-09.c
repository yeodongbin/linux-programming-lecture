   …

    while(1) {
        sockfd_connect = accept(sockfd_listen, NULL, NULL);

        /* send, recv를 호출하는 부분 */

        close(sockfd_connect);
    }

    …