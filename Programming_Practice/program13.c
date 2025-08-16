  #include<stdio.h>
float CalculatePercentage(int iMarks,int iTotal)
{
    auto float fPercentage=0.0f;

    if((iMarks<0)||(iTotal<0))      // Filter     // imark is less than 0 || itotal is less than 0
    {
        printf(" Invalid input\n");
        return fPercentage;
    }

    if(iMarks>iTotal) // imark is greter than itotal 
    {
            printf(" Inavlid input\n"); // Filter 
                return fPercentage;


    }

    
    fPercentage=(((float)iMarks /(float) iTotal)* 100);
 
    return fPercentage;

         

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