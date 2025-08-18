 #include<stdio.h>
#include<stdlib.h>

int Minimum(int *Arr,int iSize)
{
        int iCnt=0;
        int iMin=Arr[0];

        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            if(Arr[iCnt]<iMin) // iMin > Arr[iCnt]
            {
                iMin=Arr[iCnt]; // jar iMin peksha iCnt Lahan Asel tar Aaat ja

            }
 

        }

        return iMin;

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
          iRet=Minimum(ptr,iCount);
        printf(" Minimum Element is %d\n",iRet);

        free(ptr);

        printf(" Dynamic Memorey Deallocted Succesfully\n");


    return 0;
}