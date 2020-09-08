int main()
{
    int filedes;

    filedes = open("test.txt", O_RDWR);

    printf("%d \n", filedes);

    close(filedes);
}