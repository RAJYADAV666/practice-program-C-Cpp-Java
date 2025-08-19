#include<stdio.h>



void ASCII()
{
    int iCnt=0;



    printf("=======================================\n");
    printf("==================ASCII Table==========\n");
    printf("=======================================\n");

    for(iCnt=0;iCnt<=127;iCnt++)
    {
            printf("%c\t %d\t %x\t %o\n",iCnt,iCnt,iCnt,iCnt);
            
    }

    printf("=============================================\n");


}
int main()
{

        ASCII();



return 0;

}