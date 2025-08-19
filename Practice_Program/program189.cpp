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
            void InsertAtpos(int No,int ipos);
            void DeleteAtpos(int ipos);
            

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
    PNODE Temp=First;

    while(Temp->next->next !=NULL)
    {
        Temp=Temp->next;
    }

    delete(Temp->next); 
    Temp->next=NULL;

    Count--;

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
void SinglyLL::InsertAtpos(int No,int iPos)
{
    
    if((iPos< Count) ||(iPos>Count+1))
    {
        return;
    }
    if(iPos==1)
    {
        InsertFirst( No);
    }
    else if(iPos==Count+1)
    {
        InsertLast(No);
    }
    else
    {
        PNODE newn=NULL;
        newn=new NODE;
        int i=0;
        PNODE Temp=First;

        newn->next=NULL;
        newn->data=No;


            for(i=1;i<iPos-1;i++)
            {
                Temp=Temp->next;
            }

    
            newn->next=Temp->next;
            Temp->next=newn;

            Count++;

    }


}
void SinglyLL::DeleteAtpos(int iPos)
{
   
    int i=0;
    PNODE Temp=First;

    if((iPos< Count) ||(iPos>Count))
    {
        return;
    }
    if(iPos==1)
    {
            DeleteFirst( );
    }
    else if(iPos==Count)
    {
             DeleteLast();
    }
    else
    {
        PNODE Temp=First;
        PNODE TargetedNode=NULL;

            for(i=1;i<iPos-1;i++)
            {
                Temp=Temp->next;
            }

            PNODE TargetNode=Temp->next;
            Temp->next=Temp->next->next;
            delete(TargetNode);

            Count--;
    }


}


                            

int main()
{
    SinglyLL obj;
    int iRet=0;

    
    
      obj.InsertFirst(51);
      obj.InsertFirst(21);
      obj.InsertFirst(11);

      obj.InsertLast(100);
      obj.InsertLast(200);
      obj.InsertLast(300);

        obj.Display();

        iRet=obj.CountNode();
        cout<<"Number of Elment in the Linked List are:"<<iRet<<"\n";

        obj.InsertAtpos(105,5);

         obj.Display();

        iRet=obj.CountNode();
        cout<<"Number of Elment in the Linked List are:"<<iRet<<"\n";

        obj.DeleteAtpos(5);
        obj.Display();

        iRet=obj.CountNode();
        cout<<"Number of Elment in the Linked List are:"<<iRet<<"\n";


        obj.DeleteFirst();
        obj.DeleteLast();

        obj.Display();

        iRet=obj.CountNode();
        cout<<"Number of Elment in the Linked List are:"<<iRet<<"\n";




    
    return 0; 
}