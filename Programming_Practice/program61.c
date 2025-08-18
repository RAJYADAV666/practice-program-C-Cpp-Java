#include<stdio.h>
#include<stdbool.h>
bool CheckPallindrom(int iNo)
{
        int iDigit=0;
        int iRev=0;
        int iCopy=iNo;// xerox kadli 

        while(iNo !=0 )   
        {
            iDigit=iNo %10;
            iNo =iNo/10;

            iRev=(iRev*10)+iDigit;


        }

                return(iRev==iCopy);


}

int main()
{
    int iValue=0;
    bool  bRet=false;


    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    bRet=CheckPallindrom(iValue);

    if(bRet==true)
    {
            printf("%d is a Pallindrome number\n ",iValue);


    }
    else
    {
            printf("%d is a not pallindrome number\n",iValue);
    }


        return 0;


}