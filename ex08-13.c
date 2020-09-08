#include <unistd.h>

extern char **environ;

main()
{
        while(*environ)
                printf("%s\n", *environ++);
}