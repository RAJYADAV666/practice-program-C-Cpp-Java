 #include<stdio.h>
#include<stdlib.h>

int Maximum(int *Arr,int iSize)
{
        int iCnt=0;
        int iMax=Arr[0];

        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            if(Arr[iCnt]>iMax) // iMax < Arr[icnt]
            {
                iMax=Arr[iCnt]; // jar iMax peksha iCnt mota asel tar aat ja

            }


        }

        return iMax;

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
          iRet=Maximum(ptr,iCount);
        printf(" Maximum Element is %d\n",iRet);

        free(ptr);

        printf(" Dynamic Memorey Deallocted Succesfully\n");


    return 0;
}