#include<stdio.h>
#include<stdbool.h>
// jaya numbercha factor ahe ki nahi to check karyacha ahe to pahila nmber takayacha ahe 
bool CheckFactor(int iNo1,int iNo2) // eka numbercha dusra number factor ahe ka bagych ahe 
{

            if((iNo1 % iNo2)==0)
            {
                return true;
            }
            else
            {
                return false;
            }


}    // ex pahilaynada 70  number takala ni ty number cha konta number factor ahe ka he bagnyasathi dusra number enter karyacha mahnje ex 7 
int main()
{

    int iValue1=0;
    int iValue2=0;
    bool bret=false; // internally false ha 0  conevert asto
 
    

    printf("Enter the Number :\n");
    scanf("%d",&iValue1);

    printf(" Enter the Second Number:\n");
    scanf("%d",&iValue2);


        bret=CheckFactor(iValue1,iValue2);


        if(bret==true)
        {

            printf("%d is a Factor of %d\n",iValue2,iValue1);
        }
        else
        {
            printf("%d is a not  Factor of %d\n",iValue2,iValue1);
        }

    return 0;
}