#include<stdio.h>
#include<stdlib.h>
struct node
{
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
void InsertLast(PPNODE Head,int No)
{


    PNODE Temp =*Head; // Temporary Pointer for LL Travel 
    PNODE newn=NULL;
    
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;

    
    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    { // Travel Linklist till Last node 
            while(Temp->next!=NULL)
            {
                Temp=Temp->next;

            } 
            // Add the Address of new node at the end of last node 
            Temp->next=newn;
    }

    
}
void Display(PNODE Head)
{
        while(Head !=NULL)
        {
            printf("|%d|->",Head->data);
            Head=Head->next;
        }
        printf("NULL\n");
}
int count(PNODE Head)
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
    int iRet=0;

    InsertFirst(&First,111);
    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);

    Display(First);
    iRet= count(First);
    printf("The Number of Nodes  is %d\n",iRet);

    InsertLast(&First,121);
    InsertLast(&First,151);

     Display(First);

     iRet= count(First);
     printf("The Number of Nodes is %d\n",iRet);

    
    return 0;
}