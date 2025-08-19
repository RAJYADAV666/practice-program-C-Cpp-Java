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
int main()
{
    PNODE First =NULL;
    
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);


return 0;

}