// Doublely Circular Liner List:
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *next;
    struct node *prev;


};
 typedef struct node NODE;
 typedef struct node * PNODE;
 typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,PPNODE Tail,int No)
{
        PNODE newn=NULL;

            newn=(PNODE)malloc(sizeof(NODE));

            newn->Data=No;
            newn->next=NULL;
            newn->prev=NULL;
        
        if((*Head==NULL) && (*Tail==NULL))  // LL is Empty
        {
            *Head=newn;
            *Tail=newn;

        }
        else
        {
            newn->next=*Head;
            (*Head)->prev=newn;
            *Head=newn;
        

      
        }

       (*Tail)->next=*Head;
       ( *Head)->prev=*Tail; // circular Nature Complete honare 



}
void InsertLast(PPNODE Head,PPNODE Tail,int No)
{
            PNODE newn=NULL;

            newn=(PNODE)malloc(sizeof(NODE));

            newn->Data=No;
            newn->next=NULL;
            newn->prev=NULL;
        
        if((*Head==NULL) && (*Tail==NULL))  // LL is Empty
        {
            *Head=newn;
            *Tail=newn;

        }
        else
        {
           (*Tail)->next=newn;
           newn->prev=*Tail;
           *Tail=newn;
      
        }

       (*Tail)->next=*Head;
       ( *Head)->prev=*Tail; // circular Nature Complete honare 



}void InsertAtpos()
{

}
void DeleteFirst(PPNODE Head,PPNODE Tail)
{       
       if(*Head==NULL && *Tail==NULL)
       {
            return ;


       }
        else if(*Head==*Tail)
        {
                free(*Head);
                *Head=NULL;
                *Tail=NULL;
            

        }
        else 
        {
            *Head=(*Head)->next;
            free((*Tail)->next);
             

        }
            (*Tail)->next=*Head;
            (*Head)->prev=*Tail;

        
}
void DeleteLast(PPNODE Head,PPNODE Tail)
{
        

}
void DeleteAtpos()
{

}
int count(PNODE Head,PNODE Tail)
{
    int i=0;

      if(Head!=NULL && Tail!=NULL)
       {
       
        do
        {
        
            Head=Head->next;
            i++;

        }while(Head !=Tail->next);
        

       }
                return i;
}

void Display(PNODE Head,PNODE Tail)
{
       if(Head!=NULL && Tail!=NULL)
       {
       
        do
        {
            printf("|%d| <=>",Head->Data);
            Head=Head->next;

        }while(Head !=Tail->next);
        

       }
       
}



int main()
{
    PNODE First=NULL;
    PNODE Last=NULL;
    int iRes=0;

    InsertFirst(& First,&Last,51);
    InsertFirst(& First,&Last,21);
    InsertFirst(& First,&Last,11);

    InsertLast(&First,&Last,100);
    InsertLast(&First,&Last,200);
    InsertLast(&First,&Last,300);

    Display(First,Last);
    iRes=count(First,Last);
    printf("\n The Count of Element is %d\n",iRes);

    DeleteFirst(&First,&Last);
    
    Display(First,Last);
    iRes=count(First,Last);
    printf("\n The Count of Element is %d\n",iRes);





    return 0;
}