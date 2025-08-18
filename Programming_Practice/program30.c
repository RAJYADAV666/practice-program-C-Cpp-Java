#include<stdio.h>

void Display(int iNo)
{

    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf(" JAY GANESH...\n");

    }
}


int main()
{
        int iValue=0;

        printf(" Enter the number o times you want to Dispaly jay Ganesh on screen ...\n");
        scanf("%d",&iValue);

    

        Display(iValue);

    return 0;
}