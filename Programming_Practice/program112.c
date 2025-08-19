#include<stdio.h>
#include<stdbool.h>


bool CheckSmall( char cValue)
{

        if((cValue>='a' )&& (cValue<='z'))
        {

            return true;
        }
        else
        {
            return false;
        }


}
int main()
{
    char ch='\0';
    bool bRet=false;

    printf("Enter the Charchter\n");
    scanf("%c",&ch);

    bRet=CheckSmall(ch);

    if(bRet==true)
    {

        printf(" its a Samll Letter\n");
    }
    else
    {
        printf("It is not Small Letter \n");
    }


    return 0;
}