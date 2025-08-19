#include<stdio.h>
#include<stdlib.h>
// structure Declartion 
struct Node
{
 

    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int  No)
{

// step 1 : Allocate Memorey for Node 
      PNODE newn=NULL; 

      newn = (PNODE)malloc(sizeof(NODE));

      // Step 2: Initilise the node 

      newn ->data=No;
      newn->next=NULL;
 
      // Step 3: Check Whether LL is Empty or Not;

      if(*Head==NULL)  // LL is empty 
      {
            *Head=newn;

      }
      else // LL contains atleast 1 node in it 
      {
              newn ->next= *Head;
             *Head =newn;

      }

}

void Display(PNODE Head)
{
        printf("Elements of Linked List are:\n");

        while(Head !=NULL)
        {

            printf(" | %d |-> ",Head->data);
            Head=Head->next;

        }

        printf("NULL\n");


}
int main()
{

 PNODE First=NULL;  

 InsertFirst(&First,51);
 InsertFirst(&First,21);
 InsertFirst(&First,11);


Display(First);

 
 
    return 0;
}