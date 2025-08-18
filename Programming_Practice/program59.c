#include<stdio.h>
int Reverce(int iNo)
{
        int iDigit=0;
        int iRev=0;

        while(iNo !=0 ) // 0 yet nahi toparyant loop firav natar 0 ala ki condtion false kar ani loop thamb  
        {
            iDigit=iNo %10;
            iNo =iNo/10;

            iRev=(iRev*10)+iDigit;


        }

                return iRev;


}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    iRet=Reverce(iValue);

printf(" The reverse number is %d\n",iRet);


}