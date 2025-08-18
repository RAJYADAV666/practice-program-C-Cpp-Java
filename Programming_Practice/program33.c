#include<stdio.h>
void Display(int iValue)
{

        int iCnt=0;

        for(iCnt=1; iCnt<=iValue;iCnt++)
        {
                printf(" Hello World %d\n",iCnt);

        }



}
int main()
{

    int iValue=0;

    printf(" Enter the number of time you Want to display hellow world..\n");
    scanf("%d",&iValue);


        Display(iValue);

    return 0;
}