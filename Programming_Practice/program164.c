#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **PPNODE;


void InsertFirst(PPNODE Head,int No)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;

    if(*Head==NULL)  // linllist is Complete 
    {
        *Head=newn;
    }
    else
    {
        newn->next=*Head;
        *Head=newn;

    }



}
void Display(PNODE Head)
{

    while(Head!=NULL)
    {

        printf("|%d| ->",Head->data);
        Head=Head->next;
        
    }


}

int main()
{

    PNODE First=NULL;

    InsertFirst(&First,51);
    InsertFirst(&First,41);
    InsertFirst(&First,31);
    InsertFirst(&First,11);

        Display(First);
    


return 0;


}