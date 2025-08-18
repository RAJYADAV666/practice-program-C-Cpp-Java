#include<stdio.h>  
#include<stdlib.h>  


void OddDisplay( int *Arr,int iSize)
{
         int iCnt=0;
        

         printf("Odd Elements of the Array are\n");

        for(iCnt=0;iCnt<iSize;iCnt++)
        {

                if((Arr[iCnt] % 2)==1)
                {
                  printf("%d \t",Arr[iCnt]);

                }    


        }



}
int main()
{
    int iCount=0;
    int *ptr=NULL;
    int iCnt=0;
    

    printf(" Enter the Number of Elements that you want to enter :\n");
    scanf("%d",&iCount);

     ptr=(int*)malloc(iCount * sizeof(int));


     printf("Dynamic Memorey gets Allocated Succesfully for %d element\n",iCount);   
     printf("Enter the %d Values:\n",iCount);

   for(iCnt=0;iCnt<iCount;iCnt++)
   {
            printf(" Enter the element no %d:\n ",iCnt+1);
            scanf("%d",&ptr[iCnt]);


   } 

        OddDisplay(ptr,iCount);

        free(ptr);

        
        printf("\n Dyanamic Memorey Deallocate Succesfully.\n");

    return 0;
} 