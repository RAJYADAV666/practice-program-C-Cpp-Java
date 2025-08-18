#include<stdio.h>
#include<stdlib.h>

float Average(int *Arr,int iSize)
{
        int iCnt=0;
        int iSum=0;
        float fAverage=0.0;

        for(iCnt=0;iCnt<iSize;iCnt++)
        {
                iSum=iSum+Arr[iCnt];


        }
             fAverage=((float)iSum/(float)iSize);


        return fAverage;



}

int main()
{
    int iCount=0;
    int *ptr=NULL;
    int iCnt=0;
    float fRet=0;


    printf(" Enter the  Number of element to store you want:\n ");
    scanf("%d",&iCount);

    ptr=(int*) malloc(iCount*sizeof(int));
    printf(" Dyanamically Memorey gets Allocatead Succeful:\n");

    printf(" Enter the %d Element\n",iCount);

    for(iCnt=0; iCnt<iCount;iCnt++)
    {
            printf("\nEnter the Element %d :",iCnt+1);
            scanf("%d",&ptr[iCnt]);


    }



          fRet=Average(ptr,iCount);
        printf(" Average is %f\n",fRet);

        free(ptr);

        printf(" Dynamic Memorey Deallocted Succesfully\n");


    return 0;
}