#include <sys/types.h>
#include <unistd.h>

main()
{
    printf("getpgrp():%d\n", getpgrp());
    printf("getpgid(0):%d\n", getpgid(0));
    printf("getpgid(getpid()):%d\n", getpgid(getpid()));
}