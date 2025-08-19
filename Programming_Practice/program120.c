#include<stdio.h>

int strlenX(char *str)
{
        int iCnt=0;

        while(*str !='\0')   
        {
                iCnt++;
                str++;

        }
         
         return iCnt;

}
int main()
{
        char Arr[20];
        int iRet=0;

        printf("Enter the string\n");
        scanf("%[^'\n']s",Arr);

        iRet=strlenX(Arr); // StrlenX(100)

        printf(" Length of String is :%d",iRet);

    return 0;
}