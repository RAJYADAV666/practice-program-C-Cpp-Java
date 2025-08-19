#include<stdio.h>



char ConvertCapital(char cValue)
{

        return cValue-32;

}

int main()
{


    char ch='\0';
    char cRet='\0';

    printf("Enter the Charchter \n");
    scanf("%c",&ch);

    cRet=ConvertCapital(ch);

    printf(" The converted Capital Letter is %c",cRet);

    return 0;
}