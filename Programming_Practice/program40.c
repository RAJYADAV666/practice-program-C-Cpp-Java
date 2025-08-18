#include<stdio.h>
#include<stdbool.h>
void DisplayFactors(int iNo)
{  
    int iCnt=0;

        for(iCnt=1; iCnt<iNo;iCnt++)
        {
            printf(" Factors of %d are :\n",iNo);
                if((iNo % iCnt)==0)
                {
                    printf("%d\n",iCnt);
                }
              
            
        }
           
    

}
int main()
{
        int iValue=0;

        printf(" Enter the number:\n");
        scanf("%d",&iValue);

        DisplayFactors(iValue);


    return 0;
}