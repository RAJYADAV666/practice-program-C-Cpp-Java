
// Doublely Circular Liner List:
// Siranchya method ne Delete Last:
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
            free((*Tail)->next); //free(*Head->prev)

             (*Tail)->next=*Head;
            (*Head)->prev=*Tail;

            
        }
           
}
void DeleteLast(PPNODE Head,PPNODE Tail)
{
    PNODE Temp=*Head;
          
       if(*Head==NULL && *Tail==NULL) // LL is Empty 
       {
            return ;


       }
        else if(*Head==*Tail) // LL Contain One Node 
        {
                free(*Head);
                *Head=NULL;
                *Tail=NULL;
            
        }
        else   // LL Contain more Than one Node:
        {

            *Tail=(*Tail)->prev;
            free((*Tail)->next);
            (*Tail)->next=*Head;
            (*Head)->prev=*Tail;

        }

           



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

void InsertAtpos(PPNODE Head,PPNODE Tail,int No,int ipos)
{
    int size=0;
    size=count(*Head,*Tail);
    PNODE newn=NULL;
    PNODE Temp=*Head;
    int i=0;

    if((ipos <1) || (ipos>size+1))
    {
        printf("Invalid Position:\n");

    }
    if(ipos==1)
    {
        InsertFirst(Head,Tail,No);
    }
    else if(ipos==size+1)
    {
        InsertLast(Head,Tail,No);
    }
    else
    {
        newn=(PNODE)malloc(sizeof(NODE));
        
        newn->next=NULL;
        newn->prev=NULL;
        newn->Data=No;

        for(i=1;i<ipos;i++)
       {
          Temp=Temp->next;
  
       }
            
           newn->next=Temp->next;   // right Hand side Pahilyanada Jodyachi:
           Temp->next->prev=newn;

           newn->prev=Temp;
           Temp->next=newn;  // Left Side jodli 



    }



}

void DeleteAtpos(PPNODE Head,PPNODE Tail,int ipos)
{
   int size=0;
   size=count(*Head,*Tail);
   PNODE Temp=*Head;
   int i=0;

    if((ipos <1) || (ipos>size))
    {
        printf("Invalid Position:\n");
        return;

    }
    if(ipos==1)
    {
        DeleteFirst(Head,Tail);
    }
    else if(ipos==size)
    {
        DeleteLast(Head,Tail);
    }
    else
    {
            for(i=1;i<ipos;i++)
            {
                Temp=Temp->next;

            }

            Temp->next=Temp->next->next;
            free(Temp->next->prev);
            Temp->next->prev=Temp;


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

    
    
    InsertAtpos(&First,&Last,105,5); 
    Display(First,Last);
    iRes=count(First,Last);
    printf("\n The Count of Element is %d\n",iRes);


    DeleteFirst(&First,&Last); 
    Display(First,Last);
    iRes=count(First,Last);
    printf("\n The Count of Element is %d\n",iRes);


    DeleteLast(&First,&Last);
    Display(First,Last);
    iRes=count(First,Last);
    printf("\n The Count of Element is %d\n",iRes);


    
    DeleteAtpos(&First,&Last,5); 
    Display(First,Last);
    iRes=count(First,Last);
    printf("\n The Count of Element is %d\n",iRes);



    return 0;
}