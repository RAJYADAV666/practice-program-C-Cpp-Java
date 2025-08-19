#include<stdio.h>

int Counta( char *str)
{
    int iCnt=0;

    while(*str !='\0')
    {
            if(*str=='a')
            {
                iCnt++;
            }

            str++;

    }
}
int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter the String:\n");
    scanf("%[^'/n']s",Arr);


    iRet=Counta(Arr);

    printf(" Count of A letter is %d",iRet);



    return 0;
}