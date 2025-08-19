// Doubley Linear link List 
#include<stdio.h>
#include<stdlib.h>

struct node
{
        int data;
        struct node *next;
        struct node *prev ;  // # mahnje new line ahe ya code madhli 


};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head,int No)
{
    PNODE newn =NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL; // #

    if(*Head==NULL )
    {

        *Head=newn;
    }
    else
    {
        newn->next=*Head;

          (*Head)->prev=newn;//# // *Head chya Previous madhe newn cha Adress;

        *Head=newn;    

    }

}
void InsertLast(PPNODE Head,int No)
{
    PNODE newn =NULL;
    PNODE Temp=*Head;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL; // #

    if(*Head==NULL )
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
            newn->prev=Temp; //#


    }

}

void DeleteFirst(PPNODE Head)
{

            if(*Head==NULL)
            {
                return ; // Empty Linklist 
            }
            else if(((*Head)->next==NULL) &&((*Head)->prev==NULL))
            {
                free(*Head); // Single Node 
                *Head=NULL;
            }
            else
            {       
                    *Head=(*Head)->next;

                   free ((*Head)->prev);
                   (*Head)->prev=NULL;

            }

}
void DeleteLast(PPNODE Head)
{
        PNODE Temp=*Head;

            if(*Head==NULL)
            {
                return ; // Empty Linklist 
            }
            else if(((*Head)->next==NULL) &&((*Head)->prev==NULL))
            {
                free(*Head); // Single Node 
                *Head=NULL;
            }
            else
            {

                while(Temp->next->next !=NULL)
                {
                    Temp=Temp->next;
                }

               free( Temp->next);
               Temp->next=NULL;
            }


}

void Display(PNODE Head)
{
    printf("Contents of LinkedList are :\n");

        printf("NULL<=>");

        while(Head !=NULL)
        {
            printf("|%d| <=>",Head->data);
            Head=Head->next;

        }

        printf("NULL\n");

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

void InsertAtpos(PPNODE Head,int No,int ipos)
{
    int size=0;
    int i=0;

    size=Count(*Head);

    PNODE newn=NULL;
    PNODE Temp=NULL;

    if((ipos<1)||(ipos>(size+1)))
    {
        printf("Invalid Position:\n");

        return;
    }
     if(ipos==1)
    {
        InsertFirst(Head,No);
    }
    else if(ipos==size+1)
    {
        InsertLast(Head,No);
    }
    else
    {
       newn=(PNODE)malloc(sizeof(NODE));

       newn->data=No;
       newn->next=NULL;
       newn->prev=NULL; // x

        for(i=1;i<ipos-1;i++)
        {

            Temp=Temp->next;
        }

            newn->next=Temp->next;
            Temp->next->prev;
            Temp->next=newn;
           // Temp->next->prev=Temp;
            newn->prev=Temp;


    }

            


}
void DeleteAtpos(PPNODE Head,int ipos)
{

 int size=0;
 int i=0;
 PNODE Temp=NULL;

    size=Count(*Head);

    if((ipos<1)||(ipos>(size)))
    {
        printf("Invalid Position:\n");

        return;
    }
     if(ipos==1)
    {
        DeleteFirst(Head);
    }
    else if(ipos==size)
    {
        DeleteLast(Head);
    }
    else
    {

        for(i=1;i<ipos-1;i++)
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
    int iRes=0;

    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    Display(First);
    iRes=Count(First);
    printf("The Number of Elements are  is %d\n",iRes);
    

    InsertLast(&First,61);
    InsertLast(&First,71);
    InsertLast(&First,81);

    Display(First);
    iRes=Count(First);
    printf("The Number of Elements are  is %d\n",iRes);
    

    InsertAtpos(&First ,105,5);
    Display(First);
    iRes=Count(First);
    printf("The Number of Elements are  is %d\n",iRes);
    

    DeleteAtpos(&First ,5);
    Display(First);
    iRes=Count(First);
    printf("The Number of Elements are  is %d\n",iRes);
    

    DeleteFirst(&First);
    Display(First);
    iRes=Count(First);
    printf("The Number of Elements are  is %d\n",iRes);
    
    DeleteLast(&First);
    Display(First);
    iRes=Count(First);
    printf("The Number of Elements are  is %d\n",iRes);
    
   
   

    return 0;
    
 }