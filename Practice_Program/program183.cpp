
// Singly LinkList 
#include<iostream>
#include<stdlib.h>

using namespace std;
struct node
{
        int data;
        struct node *next;




};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyLL
{
    public:
           PNODE First;  // memoery allocate zaleli naste tyamule inisitilize karata yet nahi
           int Count;

            SinglyLL() // Memoery allocate karnyastahi construct lhiva lagato
            {
              First=NULL;
              Count=0;

              cout<<"Inside Constructer:\n";

            }

            void InsertFirst(int No)
            {
                
                PNODE newn=NULL;

                newn=new NODE;

                newn->data=No;
                newn->next=NULL;

                if(First==NULL) //if (Count==0)
                {
                    First=newn;

                }
                else
                {
                    newn->next=First;
                    First=newn; 
                }

                    Count++;
                

            }
             void InsertLast(int No)
             {  
                PNODE Temp=First;

                PNODE newn=NULL;
                newn=new NODE;

                newn->next=NULL;
                newn->data=No;

                if(First==NULL)
                {
                    First=newn;
                }
                else
                {
                    while(Temp->next!=NULL)
                    {
                        Temp=Temp->next;
                    }

                    Temp->next=newn;
                    newn->next=NULL; // nahi Lhilatar chalt: <-  he Syntax:
                }

                Count++;


             }
             void Display()
             {
                    PNODE Temp=First;

                    while(Temp !=NULL) //Type 1
                    {
                        cout<<" | "<<Temp->data<<"|-> ";
                        Temp=Temp->next;
                    }

                    cout<<" NULL \n";

             }
            

              



};
int main()
{
    SinglyLL obj;

      obj.InsertFirst(111);
      obj.InsertFirst(101);
      obj.InsertFirst(51);
      obj.InsertFirst(21);
      obj.InsertFirst(11);

      obj.InsertLast(100);
      obj.InsertLast(200);
      obj.InsertLast(300);

      obj. Display();
       

    cout<<"Number of elments in the Linked List Are :"<<obj.Count<<"\n";

    
    return 0;
}