 #include<stdio.h>
#include<stdlib.h>

void MaxMin(int *Arr,int iSize)
{
        int iCnt=0;
        int iMin=Arr[0];
        int iMax=Arr[0];

        for(iCnt=0;iCnt<iSize;iCnt++)
        {

             if(Arr[iCnt]>iMax) 
            {
                iMax=Arr[iCnt];   

            }
            if(Arr[iCnt]<iMin) 
            {
                iMin=Arr[iCnt];   

            }
 

        }
 
        printf(" Maximum Element is %d:\n",iMax);
        printf(" Minimum Element is %d:\n",iMin);
}

int main()
{
    int iCount=0;
    int *ptr=0;
    int iCnt=0;
    int iRet=0;


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
        MaxMin(ptr,iCount);
        

        free(ptr);

        printf(" Dynamic Memorey Deallocted Succesfully\n");


    return 0;
}