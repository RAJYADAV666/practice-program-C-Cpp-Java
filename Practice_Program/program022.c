#include<stdio.h>

float Average( int iValue1,int iValue2,int iValue3)
{
        float fAns=0.0;

        fAns=(((float)iValue1+iValue2+iValue3)/3);

        return fAns;


}
int main()
{
        int iNo1=0;
        int iNo2=0;
        int iNo3=0;
        float fRes=0.0;


        printf(" Enter the First Number..\n");
        scanf("%d",&iNo1);

        printf(" Enter the second Number ..\n");
        scanf("%d",&iNo2);

        printf(" Enter the third Number ..\n");
        scanf("%d",&iNo3);


        fRes=Average(iNo1,iNo2,iNo3);

        printf(" The three number average is %f",fRes);




    return 0;
}