#include<stdio.h>  
#include<stdlib.h>  
int  Addition( int *Arr,int iSize)
{
         int iCnt=0;
         int iSum=0;
               
        for(iCnt=0;iCnt<iSize;iCnt++)
        {

             iSum=iSum+Arr[iCnt]; 

        }

        return iSum;
}
int main()
{
    int iCount=0;
    int *ptr=NULL;
    int iCnt=0;
    int iRet=0;

    printf(" Enter the Number of Elements that you want to enter :\n");
    scanf("%d",&iCount);

     ptr=(int*)malloc(iCount * sizeof(int));

     printf(" Dynamic Memorey gets Allocated Succesfully for %d element\n ",iCount);   
     printf("Enter the %d Values:\n",iCount);

   for(iCnt=0;iCnt<iCount;iCnt++)
   {
            printf("\n Enter the element no %d: ",iCnt+1);
            scanf("%d",&ptr[iCnt]);

   } 

        iRet=Addition(ptr,iCount);

        free(ptr);

        printf(" The Addition of  Element is %d\n",iRet);
        printf(" Dyanamic Memorey Deallocate Succesfully........\n");

    return 0;
} 