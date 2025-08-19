#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char FileName[30];

  

    printf("Enter the name of file  that you want to  creat current directorey :\n  ");
    scanf("%s",FileName);
        
     unlink(FileName);



    return 0;
}