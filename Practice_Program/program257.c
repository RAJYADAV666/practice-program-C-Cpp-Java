#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> // universal standered :
#include<fcntl.h>  // file control.h

int main()
{

    int fd=0;

    fd=open("Marvellous.txt",O_RDONLY);
     int iRet=0;   
    char Arr[50]={'\0'};

        if(fd==-1)
        {

            printf("Unable to Open File:\n");
        }
        else
        {
                 iRet=read (fd,Arr,22);
                 printf("%d bytes gets succesfully read from  the file \n",iRet);

                printf("%s\n",Arr);
                close(fd); 

        }


    return 0;

}