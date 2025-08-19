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
        
        if(iSum==iNo)
        {
                printf(" The %d are perfect Number\n",iNo);

        }
        else
        {
            printf(" The %d are not perfect Number \n ",iNo);
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

        

        

    return 0;
}