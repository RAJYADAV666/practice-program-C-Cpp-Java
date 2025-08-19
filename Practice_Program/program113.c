#include<stdio.h>



char ConvertSmall(char cValue)
{

        return cValue+32;

}

int main()
{


    char ch='\0';
    char cRet='\0';

    printf("Enter the Charchter \n");
    scanf("%c",&ch);

    cRet=ConvertSmall(ch);

    printf(" The converted Smaller Letter is %c",cRet);

    return 0;
}