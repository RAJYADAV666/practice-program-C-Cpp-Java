/*
        START
            Accept number from user
            Dived that number by 2
            If reminder is 0 then Display even 
            Otherwise Display odd 


        STOP


*/

#include<stdio.h>
#include<stdbool.h>
////////////////////////////////////////////////////
//
//
//
//
/////////////////////////////////////////////////////
bool CheckEven(int iNo)
{
        if((iNo % 2) == 0)
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
    int ivalue=0;

    bool bRet = false;

    printf(" Enter the Number:\n");
    scanf("%d",&ivalue);

    bRet=CheckEven(ivalue);

    if(bRet == true)
    {
        printf("%d is an even number \n",ivalue);
    }
    else
    {

0        printf("%d is an odd number \n",ivalue);
    }

    return 0;
}