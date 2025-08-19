#include<stdio.h>
#include<stdlib.h>

struct node
{

    int data;
    struct node * next;



};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


// Void InsertFirst 
void Push(PPNODE Head,int No)
{
        PNODE newn=NULL;

        newn=(PNODE)malloc(sizeof(NODE));

        newn->next=NULL;
        newn->data=No;

        if(*Head==NULL)
        {
                *Head=newn;

        }
        else
        {
                newn->next=*Head;
                *Head=newn;

        }


}
// Void DeleteFirst // element kadun den majnje ekhedi value den tymule return value 
int Pop(PPNODE Head)
{
    PNODE Temp=*Head;
    int Value=0;

    if(*Head==NULL)
    {
        printf("STACK IS EMPTY:..");
        
    }
    else 
    {
        Value=(*Head)->data;
        *Head=(*Head)->next;
        free(Temp);
    

    }
     return Value;
    

}
void Display(PNODE Head)
{

    printf("Elements of stack are:\n");

        while(Head!=NULL)
        {
            printf("%d |\n",Head->data);
            Head=Head->next;


        }


}
int main()
{
    PNODE First=NULL;
    int iRet=0;

     Push(&First,101);
     Push(&First,51);
     Push(&First,21);
     Push(&First,11);

     iRet=Pop(&First);
     printf("Poped Element is :%d\n",iRet);

     iRet=Pop(&First);
      printf("Poped Element is :%d\n",iRet);

     iRet=Pop(&First);
      printf("Poped Element is :%d\n",iRet);


   Display(First);
    return 0;
}