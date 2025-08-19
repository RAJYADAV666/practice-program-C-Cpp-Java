#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> // universal standered :
#include<fcntl.h>  // file control.h

int main()
{

    int fd=0;

    fd=open("Demo_Txt",O_RDONLY);

        if(fd==-1)
        {

            printf("Unable to Open File:\n");
        }
        else
        {
            printf("File is succesfully opened with fd %d",fd);
        }


    return 0;

}