#include<stdio.h>  // for printf
#include<stdlib.h>  // for malloc and calloc 
int main()
{
    int iCount=0;
    int *ptr=NULL;
    int iCnt=0;

    printf(" Enter the Number of Element:\n");
    scanf("%d",&iCount);

     ptr=(int*)malloc(iCount * sizeof(int));


   for(iCnt=0;iCnt<iCount;iCnt++)
   {
            printf("Enter the %d element\n",iCnt);
            scanf("%d",&ptr[iCnt]);


   } 

printf(" You enterd element are:\n");

for(iCnt=0;iCnt<iCount;iCnt++)
{
    printf("%d\t",ptr[iCnt]);


}

    return 0;
}