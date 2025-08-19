#include<stdio.h>  // for printf
#include<stdlib.h>  // for malloc and calloc 


void Display( int Arr[] ,int iSize) // Addres ch ghetoy Arr[]
{
         int iCnt=0;

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

    printf(" Enter the Number of Element:\n");
    scanf("%d",&iCount);

     ptr=(int*)malloc(iCount * sizeof(int));


     printf("Enter the element\n");

   for(iCnt=0;iCnt<iCount;iCnt++)
   {
            
            scanf("%d",&ptr[iCnt]);


   } 

        Display(ptr,iCount);

    return 0;
}