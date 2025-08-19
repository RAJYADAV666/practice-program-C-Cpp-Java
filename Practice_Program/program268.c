#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>


int main()
{
    char FileName[30];
    char Arr[100]={'\0'};

    int fd=0;
    int iret=0;
    int iSize=0;

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
            printf("%d Bytes gets read from the file \n",iret);
            iSize=iSize+iret;

          
        }   

          printf("File contain %d bytes in it ",iSize);
        

        close (fd);
    }


    return 0;
} 