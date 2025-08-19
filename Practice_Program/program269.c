#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

 #define BUFFERSIZE 1024   

int main()
{
    char FileName[30];
    char Arr[BUFFERSIZE]={'\0'};

    int fd=0;
    int iret=0;

    printf("Enter the name of file  that you want to open  from current directorey :\n  ");
    scanf("%s",FileName);

    fd=open(FileName,O_RDWR);

    if(fd==-1)
    { 

            printf(" Unable to open %s files ",FileName);


    }
    else 
    {

        printf(" %s gets opened Succesfully with file Descriptor %d\n",FileName,fd);

        while((iret=read(fd,Arr,sizeof(Arr))) !=0)
        {
            printf("%s",Arr);

        }   close (fd);
    }


    return 0;
} 