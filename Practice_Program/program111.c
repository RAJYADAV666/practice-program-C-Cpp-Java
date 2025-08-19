#include<stdio.h>
#include<stdbool.h>


bool CheckCapital( char cValue)
{

        if((cValue>'A' )&& (cValue<='Z'))
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

    bRet=CheckCapital(ch);

    if(bRet==true)
    {

        printf(" its Capital Letter\n");
    }
    else
    {
        printf("It is not Capital Letter \n");
    }


    return 0;
}