
#include<stdio.h>
long int Calculate_cube(int  ivalue)
{

     
     long int iCube=0;

     iCube=ivalue*ivalue*ivalue;

     return iCube;


} 
int main() 
{
     auto int iNo=0;
     long int iAns=0;
     
     printf(" Enter the Number :\n");
     scanf("%d",&iNo);

     iAns=Calculate_cube(iNo);
// rikami pishvi ians
     printf(" cube  is : %ld ",iAns);

     return 0;

}