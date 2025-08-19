#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char FileName[30];

    int fd=0;

    printf("Enter the name of file  that you want to  creat current directorey :\n  ");
    scanf("%s",FileName);

    fd=creat(FileName,0777);

    if(fd==-1)
    {

            printf(" Unable to creat %s files ",FileName);


    }
    else
    {
        printf("%s get succesfully with file descriptor  %d \n",FileName,fd);
        
    }



    return 0;
}