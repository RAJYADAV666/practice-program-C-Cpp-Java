#include<stdio.h>
#include<stdlib.h>
struct node
{

    int data; // 4 byte 
    struct node *next; // 8 byte 


};
typedef struct node NODE;
typedef struct node * PNODE; 
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    // step 1 : Allocate memory for node 

    PNODE newn=NULL;  // ek pointer tyar kelela ahe newn navacha  
    newn=(PNODE)malloc(sizeof(NODE));

    // Step 2: Initilise the node 

    newn->data=No;
    newn->next=NULL;

    // step 3: Check Whether Linked List is Empty or not

    if(*Head==NULL) // Linked is Empty 
    {
        *Head=newn;
    }
    else// Linked List contains atleast 1 Node in it 
    {

        newn->next = *Head;
        *Head=newn;
    }
}
void Display(PNODE Head)
{
    printf(" Element of linked List are:\n");

    while(Head !=NULL)
    {
        printf(" |%d|->",Head->data);
        Head=Head->next;

    }

    printf("NULL\n");

}
int Count(PNODE Head)
{
   int iCnt=0;



    while(Head !=NULL)
    {
        iCnt++;
        Head=Head->next;

    }

    return iCnt;

}
int main()
{
    PNODE First =NULL;
    int iRet=0;
    
    InsertFirst(&First,51);// InsertFirst(60,51)
    InsertFirst(&First,21);// InsertFirst(60,21)
    InsertFirst(&First,11);// InsertFirst(60,11)

    Display(First);
                    // Display(100)


     iRet=Count(First); 

     printf("Number of Nodes are :%d\n",iRet);             


return 0;

}