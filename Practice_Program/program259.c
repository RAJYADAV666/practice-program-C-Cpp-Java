#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char FileName[30];

    int fd=0;

    printf("Enter the name of file  that you want to open current directorey :\n  ");
    scanf("%s",FileName);

    fd=open(FileName,O_RDWR);

    if(fd==-1)
    {

            printf(" Unable to open %s files ",FileName);


    }
    else
    {
        printf("%s get succesfully with file descriptor  %d \n",FileName,fd);
        close(fd);
    }



    return 0;
}