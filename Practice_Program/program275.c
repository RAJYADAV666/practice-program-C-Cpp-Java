#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

#define BUFFERSIZE 1024

int main()
{
    int fdread=0;
    int fdWrite=0;
     char Buffer[BUFFERSIZE] ={'\0'};
     int iret=0;

    char FnameSrc[30]; // source jikdun data read karanre tikdun
    char FnameDest[30];

    printf("Enter the name of Existing file:\n");
    scanf("%s",FnameSrc);

    printf("Enter the  name of File that we want to create :\n");
    scanf("%S",FnameDest);

    fdread=open(FnameSrc,O_RDONLY); 
     if(fdread==-1)
    {
        printf("Failure in openeing Existing file:\n");
            return -1;
    } 
    fdWrite=creat(FnameDest,0777);

      if(fdWrite==-1)
    {
        printf("Failure in craeting new file :\n");
        return -1;
    }

            while((iret=read(fdread,Buffer,sizeof(Buffer)))!=0)
            {
                write(fdWrite,Buffer,iret);
            
            }


close(fdread);
close(fdWrite);

printf(" File Copy Sucesfully:\n");

}