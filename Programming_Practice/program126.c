#include<stdio.h>

int CountDigit( char *str )
{
    int iCnt=0;


    while(*str !='\0')
    {
        if((*str>='0')&& (*str<='9')) 
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


    printf("Enter the String:\n");
    scanf("%[^'\n']s",Arr);

    
    iRet=CountDigit(Arr);

    printf(" The Digit Count is %d",iRet);
   

    return 0;
}