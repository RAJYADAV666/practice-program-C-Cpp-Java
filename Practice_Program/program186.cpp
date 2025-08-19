// Outside class:
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
    private:
           PNODE First;
           int Count; 

    public :      
            SinglyLL(); 
           
            void InsertFirst(int No); // Ethe fakt declear kel ani class chya baher define kel:
            void InsertLast(int No);
            void Display();
            int CountNode();
            void DeleteFirst();
            void DeleteLast();
            

};
/* 
    Return _Value Class_Name::Function Name()
    {

    }



*/
SinglyLL ::SinglyLL()
{
    cout<<"Inside Constructer:\n";
    First=NULL;
    Count=0;

 }   
void SinglyLL:: InsertFirst(int No)
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
void SinglyLL ::InsertLast(int No)
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
void SinglyLL::DeleteFirst()
{
    PNODE Temp=First;

        if(First==NULL)
        {
                return;
        }
        else if(First->next==NULL)
        {
                delete(First);
                First=NULL;
        }
        else
        {
                First=First->next;
                delete(Temp);

        }
        
        Count--;

}
void SinglyLL::DeleteLast()
{

}
void SinglyLL:: Display()
{
    PNODE Temp=First;

    while(Temp !=NULL) //Type 1
    {
        cout<<" | "<<Temp->data<<"|-> ";
        Temp=Temp->next;
    }

    cout<<" NULL \n";

}
            
int SinglyLL:: CountNode()
{
return Count;
}      
              

int main()
{
    SinglyLL obj;
    int iRet=0;

      obj.InsertFirst(111);
      obj.InsertFirst(101);
      obj.InsertFirst(51);
      obj.InsertFirst(21);
      obj.InsertFirst(11);

      obj.InsertLast(100);
      obj.InsertLast(200);
      obj.InsertLast(300);

      obj.DeleteFirst();

      obj. Display();

      iRet=obj.CountNode();
      cout<<"Number of Elment in the LinkedList are :"<<iRet<<"\n";
    

    

    
    return 0; 
}