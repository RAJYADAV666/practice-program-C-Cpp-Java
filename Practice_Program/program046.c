 #include<stdio.h>
 #include<stdbool.h>
bool CheckFactor(int iNo)
{

        int iSum=0;
        int iCnt=0;

        if(iNo<0)  //Updator
        {
            iNo=-iNo;

        }

        for(iCnt=1; iCnt<iNo;iCnt++)
        {   
                if((iNo % iCnt)==0)
                {
                    iSum=iSum+iCnt;

                   

                }
               
        }
        
        if(iSum==iNo)
        {
               return true;

        }
        else
        {
                return false;

        }
        
    

}

int main()
{
            int iValue=0;
            int iRet=0;
            bool bret=false;  

        printf(" Enter the Number.\n");
        scanf("%d",&iValue);

        bret=CheckFactor(iValue);

        if(bret==true)
        {
            printf(" the %d is perfect number \n",iValue);
        }
        else
        {
            printf(" the %d is not perfect number \n",iValue );
        }



        

    return 0;
}