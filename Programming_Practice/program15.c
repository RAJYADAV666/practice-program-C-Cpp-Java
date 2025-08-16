#include<stdio.h>
void DisplayClass(float fMark)
{
    
     if((fMark >=0.0) && (fMark < 35.00))
    {
            printf(" You are Fail..\n");
    }
    else if((fMark >=35.00) && (fMark < 50.00))
    {
            printf("Your class is pass class...\n");

    }else if((fMark >=50.00) && (fMark <=60.00))
    {
            printf(" Your class is second class...\n");

    }
    else if((fMark >=60.00) && (fMark <=75.00))
    {
            printf("Your class is First class...\n");

    }
    else if((fMark >=75.00) && (fMark <=100.00))
    {

        printf("Your class is First clas with Distinction ..\n");
    }
    
    


}

int main()
{

    float fValue=0.0f;

    printf(" Enter your Percentage\n");
    scanf("%f",&fValue);

    DisplayClass(fValue);


    return 0;
}