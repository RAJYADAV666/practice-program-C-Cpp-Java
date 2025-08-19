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

// void InsertFirst
void Push(PPNODE Head,int No)
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

int Pop(PPNODE Head)
{           
    PNODE Temp=*Head;
    int value=0;

    if(*Head==NULL)
    {
        printf("STACK IS EMPTY...");
        
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
    printf("Elements of Stack :\n");

    while(Head !=NULL)
    {
        printf("|%d|\n",Head->data);
        Head=Head->next;

    }

}
int main()
{

    int iRet=0;

    PNODE First=NULL;

    Push(&First,101);
    Push(&First,51);
    Push(&First,21);
    Push(&First,11);
    Display(First);

    iRet=Pop(&First);
    printf("POP Element is :%d\n",iRet);

    iRet=Pop(&First);
    printf("POP Element is :%d\n",iRet);

    iRet=Pop(&First);
    printf("POP Element is :%d\n",iRet);

    iRet=Pop(&First);
    printf("POP Element is :%d\n",iRet);

    iRet=Pop(&First);
    printf("POP Element is :%d\n",iRet);


    Display(First);



    return 0;
}