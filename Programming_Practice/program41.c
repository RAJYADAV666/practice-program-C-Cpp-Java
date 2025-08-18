#include<stdio.h>

void CheckFactor(int iNo)
{
        int iCnt=0;

        printf(" The factor of %d are \n",iNo);

        for(iCnt=1; iCnt<=(iNo/2);iCnt++)
        {
                if((iNo %2)==0)
                {
                    printf("%d\n",iCnt);
                }

        }


}


int main()
{

    int iValue=0;

    printf(" Enter the Number :");
    scanf("%d",&iValue);

    CheckFactor(iValue);


}