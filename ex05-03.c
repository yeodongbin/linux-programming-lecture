
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    DIR *dirp;
    struct dirent *dentry;

    if((dirp = opendir(".")) == NULL)    
    {
        fprintf(stderr, "Error on opening directory test_dirl\n");
        exit(1);

    }

    closedir(dirp);
}
