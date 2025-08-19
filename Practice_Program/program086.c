 // 1 # 2 # 3 # 4 # 5 #......\n
#include<stdio.h>

void Display(int iNo )
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
      printf(" %d\t#\t",iCnt); 
    }

    printf("\n");
}

int main()
{
    int iValue=0;
    

    printf(" Enter the the numer to print  :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}