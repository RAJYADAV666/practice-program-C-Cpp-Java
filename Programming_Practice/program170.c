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

    PNODE Temp=*Head;
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
        while(Temp->next !=NULL)
        {
            Temp=Temp->next;
        }
            Temp->next=newn;
    } 

}
void DeleteFirst(PPNODE Head)
{
        PNODE Temp=NULL;

        if(*Head==NULL)
        {
            return;

        }
        else if((*Head)->next==NULL)
        {
            free(*Head);
            *Head=NULL;

        }
        else
        {
                *Head=(*Head)->next;
                free(Temp);

        }

    
}
void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;

    if(*Head == NULL)   // Case 1
    {
        return;
    }
    else if((*Head) -> next == NULL)    // Case 2
    {
        free(*Head);
        *Head = NULL;
    }
    else    // Case 3
    {
        while(Temp->next->next != NULL)
        {
            Temp = Temp -> next;
        }
        free(Temp -> next);
        Temp -> next = NULL;
    }
}

void InsertAtPos(PPNODE Head, int No, int iPos)
{
    int Size = Count(*Head);
    PNODE newn = NULL;
    int i = 0;
    PNODE temp = *Head;

    // Case 1 : Invalid Position    (Ex : 11 / -2 / 8)
    if((iPos < 1) || (iPos > Size+1))
    {
        printf("Invalid Position\n");
        return;
    }

    // Case 2 : First Position      (Ex : 1)
    if(iPos == 1)
    {
        InsertFirst(Head, No);
    }
    // Case 3 : Last Position       (Ex : 7)
    else if(iPos == Size + 1)
    {
        InsertLast(Head, No);
    }
    // Case 4 : Position is in between Fisrt and Last   (Ex : 5)
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;

        for(i = 1; i< iPos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}




void Display(PNODE Head)
{
        while(Head !=NULL)
        {

            printf("|%d|->",Head->data);
            Head=Head->next;
        }
        printf("NULL");

}
int Count(PNODE Head)
{
    int i=0;

    while(Head !=NULL)
  {
    Head=Head->next;
    i++;

  }
    return i;

}
int main()
{


    PNODE First =NULL;
    int iRes=0;


    InsertFirst(&First,100);
    InsertFirst(&First,50);
    InsertFirst(&First,30);
    InsertFirst(&First,10);
   
    
    Display(First);
    iRes=Count(First);
    printf("\nThe Node Count is %d\n",iRes);

    InsertLast(&First,200);
    InsertLast(&First,300);

    Display(First);
    iRes=Count(First);
    printf("\nThe Node Count is %d\n",iRes);

     DeleteFirst(&First);

    Display(First);
    iRes=Count(First);
    printf("\nThe Node Count is %d\n",iRes);

    DeleteLast(&First);
    Display(First);
    iRes = Count(First);
    printf("Number of nodes are : %d\n",iRes);
    
    InsertAtpos(&First,74,3);
    Display(First);
    iRes = Count(First);
    printf("Number of nodes are : %d\n",iRes);
    


    return 0;
}