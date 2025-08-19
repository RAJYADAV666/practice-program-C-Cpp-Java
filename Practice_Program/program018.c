#include<stdio.h>

   void DisplayExamTime(int iStanderd)
{

        if(iStanderd==1)
        {

            printf(" Your exam time is 8 Am..\n");
        }
        else if(iStanderd==2)
        {

            printf(" Your exam time is 9 Am..\n");
        }
        
         else if(iStanderd==3)
        {

            printf(" Your exam time is 9 Am..\n");
        }    
         else if(iStanderd==4)
        {

            printf(" Your exam time is 10 Am..\n");
        }
        
        else if (iStanderd==5)
        {

            printf(" Your exam time is 11 Am..\n");
        }
        else
        {
            printf(" Invalid input..\n");
        }

}
int main()
{
    int iValue=0;

    printf(" Enter the Standerd.\n");
    scanf("%d",&iValue);

    DisplayExamTime(iValue);

    return 0;
}