#include<stdio.h>
int SumDigits(int iNo)
{
     
        int iSum=0;
        int iDigit=0;

        while(iNo!=0)
        {
            iDigit=iNo %10;
            
            iSum=iSum+iDigit;

            iNo=iNo/10;
            

        }

        return iSum;


}
int main()
{

    int iValue=0;
    int iRet=0;

    printf(" Enter the Number\n");
    scanf("%d",&iValue);

        iRet=SumDigits(iValue);

    printf(" Addition  of Digits are :%d\n",iRet);    


    return 0;
}