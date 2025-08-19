 #include<stdio.h>
#include<stdlib.h>

int Frequency(int *Arr,int iSize,int iNo)
{
        int iCnt=0;
        int iFrequency=0;

        for(iCnt=0;iCnt<iSize;iCnt++)
        {

            if(Arr[iCnt]==iNo)
            {
                iFrequency++;

            }

        }
            return iFrequency;
      
}

int main()
{
    int iCount=0;
    int *ptr=NULL;
    int iCnt=0;
    int iRet=0;
    int iValue=0;


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
    

        printf(" Enter the Element you Want to search  :\n");
        scanf("%d",&iValue);
    
          iRet=Frequency(ptr,iCount,iValue);
          printf("%d occurs %d times\n",iValue,iRet);

        
        free(ptr);

        printf(" Dynamic Memorey Deallocted Succesfully\n");


    return 0;
} 