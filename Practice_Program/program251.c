#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> // universal standered :
#include<fcntl.h>  // file control.h

int main()
{

    int fd=0;

    fd=open("program249.c",O_RDONLY);

        if(fd==-1)
        {

            printf("Unable to Open File:\n");
        }
        else
        {
            printf("File is succesfully opened with fd %d\n",fd);
            close(fd);
            printf("File gets succesfully closed:\n");
        }


    return 0;

}