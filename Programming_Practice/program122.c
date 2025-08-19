#include<stdio.h>

int Counta( char *str ,char ch)
{
    int iCnt=0;


    while(*str !='\0')
    {
        if(*str==ch) 
        {
                iCnt++;
        }
        str++;
    }

    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet=0;
    char cValue='\0';

    printf("Enter the String:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Charcter to Find Frequancy:\n");
    scanf("%c",&cValue);


    iRet=Counta(Arr,cValue);

    printf(" Count of A letter is %d",iRet);



    return 0;
}