#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> // universal standered :
#include<fcntl.h>  // file control.h

int main()
{

    int fd=0;

    fd=creat("Marvellous.txt",0777);

        if(fd==-1)
        {

            printf("Unable to Open File:\n");
        }
        else
        {
            printf("File is succesfully opened with fd %d\n",fd);
           
        }


    return 0;

}