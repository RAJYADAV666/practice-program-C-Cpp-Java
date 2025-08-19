#include<stdio.h>
 int Maximum(int iValue1,int iValue2)
{
            if(iValue1 > iValue2)
            {

                return iValue1;
            }
            else
            {

                return iValue2;
            }




}
int main()
{
         auto int iNo1=0;
         auto int iNo2=0;
         auto int iRet=0;

        printf(" Enter a First Number..\n");
        scanf("%d",&iNo1);

        printf(" Enter a Second Number \n");
        scanf("%d",&iNo2);

        iRet=Maximum(iNo1,iNo2);

        printf(" Largest number is %d\n",iRet);





    return 0;
}