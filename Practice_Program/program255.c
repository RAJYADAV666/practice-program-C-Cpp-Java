#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> // universal standered :
#include<fcntl.h>  // file control.h

int main()
{

    int fd=0;

    fd=open("Marvellous.txt",O_RDWR | O_APPEND);
     int iRet=0;   
    char Arr[]="Angular Web Development";

        if(fd==-1)
        {

            printf("Unable to Open File:\n");
        }
        else
        {
                 iRet=write (fd,Arr,23);
                 printf("%d bytes gets succesfully Written into the file ",iRet);

                close(fd);

        }


    return 0;

}