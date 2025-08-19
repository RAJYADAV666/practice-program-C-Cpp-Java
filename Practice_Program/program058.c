 #include<stdio.h>
int SumDigits(int iNo)
{
     
        int OCnt=0;
        int iDigit=0;
        int iSum=0;

        while(iNo!=0)
        {
            iDigit=iNo %10;
            
           if((iDigit %2 )==1)
           {
    
                OCnt++;       

           }
            iNo=iNo/10;
            

        }

        return OCnt;


}
int main()
{

    int iValue=0;
    int iRet=0;

    printf(" Enter the Number\n");
    scanf("%d",&iValue);

        iRet=SumDigits(iValue);

    printf(" odd count of Digits are :%d\n",iRet);    


    return 0;
}