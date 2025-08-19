#include<stdio.h>
int CountDigits(int iNo)
{
     
        int iCnt=0; 
        int iDigit=0;

        while(iNo!=0)
        {
            iDigit=iNo%10;
            iNo=iNo/10;
            iCnt++;



        }

        return iCnt;


}
int main()
{

    int iValue=0;
    int iRet=0;

    printf(" Enter the Number\n");
    scanf("%d",&iValue);

        iRet=CountDigits(iValue);

    printf(" Number of Digits are :%d\n",iRet);    


    return 0;
}