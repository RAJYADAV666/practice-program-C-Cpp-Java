#include<stdio.h>  
#include<stdlib.h>  


void Display( int *Arr,int iSize)
{
         int iCnt=0;

         printf(" \n Elements of the Array are\n");

        for(iCnt=0;iCnt<iSize;iCnt++)
        {
                printf("%d \t",Arr[iCnt]);

        }
            printf("\n");



}
int main()
{
    int iCount=0;
    int *ptr=NULL;
    int iCnt=0;

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

        Display(ptr,iCount);

        free(ptr);

        printf(" Dyanamic Memorey Deallocate Succesfully........\n");

    return 0;
} 