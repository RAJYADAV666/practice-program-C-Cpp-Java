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

// void insertlast
void Enqueue(PPNODE Head,int No)
{
    PNODE newn=NULL;
    PNODE Temp=*Head;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;

    if(*Head==NULL)
    {
        *Head=newn;
        
    }
    else
    {

        while(Temp ->next !=NULL)
        {
            Temp=Temp->next;

        }

        Temp->next=newn;
        newn->next=NULL;
    }

}
// void Deletelast
int Dequeue(PPNODE Head)
{
        int value=0;
        PNODE Temp=NULL;

    

        if(*Head==NULL)
        {
            printf("Queue is Empty:\n");
        }
        else
        {
            value=(*Head)->data;
            *Head=(*Head)->next;
            free(Temp);


        }


return value;

}

void Display(PNODE Head)
{
    printf("Elements of Queue Are :\n");

        while(Head !=NULL)
        {
            printf("|%d|->",Head->data);
            Head=Head->next;
        }
        printf("\n");

}


int main()
{

    PNODE First=NULL;
    int iRes=0;

     Enqueue(&First,100);
     Enqueue(&First,200);
     Enqueue(&First,300);
    Display(First);

    iRes=Dequeue(&First);
    printf("The Dequeue Elment is: %d\n",iRes);

    iRes=Dequeue(&First);
    printf("The Dequeue Elment is :%d\n",iRes);

   

    Display(First);

    return 0;
}