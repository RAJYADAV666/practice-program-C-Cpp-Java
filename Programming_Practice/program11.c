#include<stdio.h>


float CalculatePercentage(int iMarks,int iTotal)
{
    auto float fPercentage=0.0f;
    
    fPercentage=(((float)iMarks /(float) iTotal)* 100);
 
    return fPercentage;

        // jar intger / integer kel tar ans he 0 ch yet tymule yethe typecasting kele 



}
int main()
{
     auto  int iValue1=0;
     auto  int iValue2=0;
     auto  float fret=0.0f;

    printf(" Enter the marks :\n");
    scanf("%d",&iValue1);

    printf(" Enter the total mark:\n");
    scanf("%d",&iValue2);

    fret=CalculatePercentage(iValue1,iValue2);

    printf(" Your percentage is :%f",fret);




    return 0;
}