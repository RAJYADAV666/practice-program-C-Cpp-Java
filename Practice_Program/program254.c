#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> // universal standered :
#include<fcntl.h>  // file control.h

int main()
{

    int fd=0;

    fd=open("Marvellous.txt",O_RDWR);
     int iRet=0;   
    char Arr[]="Pre-Placement Activity";

        if(fd==-1)
        {

            printf("Unable to Open File:\n");
        }
        else
        {
                 iRet=write (fd,Arr,22);
                 printf("%d bytes gets succesfully Written into the file ",iRet);

                close(fd);

        }


    return 0;

}