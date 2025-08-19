
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
void DeleteFirst(PPNODE Head )
{
    PNODE Temp=*Head;

    if(*Head==NULL)
    {                   //Case 1
            return;
    }
    else if(((*Head)->next==NULL))
    {                       
            free(*Head);        //Case 2
            *Head=NULL;

    }
    else
    {            
        *Head=(*Head)->next;       //Case 3
            free(Temp);

    }

}
void DeleteLast(PPNODE Head)
{ 
    PNODE Temp=*Head;
    
    if(*Head==NULL)
    {
            return;
    }
    else if(((*Head)->next==NULL))
    {
            free(*Head);
            *Head=NULL;

    }
    else
    {
            while(Temp->next->next!=NULL)
            {
                    Temp=Temp->next;

            }

            free(Temp->next); // lastcha delete zala 
            Temp->next=NULL;

    }

}
void InsertAtPos(PPNODE Head,int No,int iPos)
{
        int Size=0;

        Size=count(*Head); // Call by value function ahe 

        //Case 1: Invalid Position (Ex:11)

        if(iPos<1 || iPos<Size+1)
        {
            printf("Invalid Position:\n");
            return ;
        }
        //Case2:First Position     (Ex:1)
        if(iPos==1)
        {
                InsertFirst(Head,No);
        }
        //Case3:Last Position       (Ex:7)
        else if(iPos==Size+1)
        {
                InsertLast(Head,No);
        }
        else
        {


        }

        
        //Case4:Position is in Between First And Last 
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

     DeleteFirst(&First);
     Display(First);
     iRet=count(First);
     printf("Number of Nodes are %d\n",iRet);

      DeleteLast(&First);
     Display(First);
     iRet=count(First);
     printf("Number of Nodes are %d\n",iRet);

    
    return 0;
}