#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>


int main()
{
    char FileName[30];
    char Arr[100]={'\0'};
    char brr[100]={'\0'};

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
    

        iret=read(fd,Arr,10);

        printf("%d Bytes gets succesfully Written into the file:\n",iret);
        
        printf(" Data from file is %s\n",Arr);
        
        iret=read(fd,brr,12);

        printf("%d Bytes gets succesfully Written into the file:\n",iret);
        
        printf(" Data from file is %s\n",brr);
        

        close(fd);
    }



    return 0;
}