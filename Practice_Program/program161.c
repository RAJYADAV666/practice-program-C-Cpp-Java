#include<stdio.h>
#include<stdlib.h>

struct node
{  // self referntial structure 
    int data;
    struct node *next;


};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int No)
{
        PNODE newn=NULL;

        newn=(PNODE)malloc(sizeof(NODE));

        newn->data=No;
        newn->next=NULL;

        if(*Head==NULL) //LL is incomplete 
        {
            *Head=newn;
        }
        else
        {
          newn->next=*Head;  // Navin mulane tyacha hat junya mulachya khndyavar tevala 
          *Head=newn;     

        }
    
}
void Display(PNODE Head)
{
    printf("Contents of Linked List :\n");

    while(Head !=NULL)
    {
        printf("|%d|->",Head->data);
        Head=Head->next;

      


    }
        printf("NULL\n");


}

int Count(PNODE Head)
{
    int iCnt=0;

    while(Head!=NULL)
    {
        Head=Head->next;
        iCnt++;


    }

return iCnt;

}
int main()
{

PNODE First=NULL;
int iAns;

InsertFirst(&First,111);
InsertFirst(&First,101);
InsertFirst(&First,51);
InsertFirst(&First,41);
InsertFirst(&First,21);

Display(First);
iAns=Count(First);

printf("The count is %d",iAns);

    return 0;
}