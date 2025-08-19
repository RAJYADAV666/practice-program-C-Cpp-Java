#include<stdio.h>

void Display(int iNo)
{
     
     
        int iDigit=0;

        printf(" Value of iNo is %d\n",iNo); //721

    printf("=======================================================\n");


        iDigit= iNo % 10;
        printf(" Digit is %d\n",iDigit); //1
        iNo=iNo /10;
        printf(" Value of iNo is :%d\n",iNo);  //72

        iDigit= iNo % 10;     //2
        printf(" Digit is %d\n",iDigit); //7
        iNo=iNo /10;
        printf(" Value of iNo is :%d\n",iNo);

        iDigit= iNo % 10;   
        printf("Digit is %d\n",iDigit); //7
        iNo=iNo /10;       //0
        printf(" Value of iNo is :%d\n",iNo);

     


}
int main()
{

    int iValue=721;

    //printf(" Enter the Number\n");
    //scnaf("%d",&iValue);

        Display(iValue);


    return 0;
}