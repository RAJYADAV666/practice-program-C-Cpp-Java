 #include<stdio.h>
int SumFactor(int iNo)
{

        int iSum=0;
        int iCnt=0;

        for(iCnt=1; iCnt<iNo;iCnt++)
        {   
                if((iNo % iCnt)==0)
                {
                    iSum=iSum+iCnt;

                    

                }

        }

        return iSum;
    

}

int main()
{
            int iValue=0;
            int iRet=0;

        printf(" Enter the Number.\n");
        scanf("%d",&iValue);

        iRet=SumFactor(iValue);

        printf(" The Factorial Addition is %d",iRet);

    return 0;
}