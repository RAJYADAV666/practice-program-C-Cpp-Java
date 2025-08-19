//DoublyLL Linear:
#include<iostream>
#include<stdlib.h>

using namespace std;
struct node
{
        int data;
        struct node *next;
        struct node *Prev;

};
typedef struct node NODE;
typedef struct node * PNODE;

class DoublyLL
{
    private:
           PNODE First;
           int Count; 

    public :      
             DoublyLL();  // constructer
           
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
 DoublyLL:: DoublyLL()
{
    First=NULL;

    Count=0;

}   
void   DoublyLL::InsertFirst(int No)
{ 
    
}
void  DoublyLL::InsertLast(int No)
{     
   
}
void  DoublyLL::DeleteFirst()
{
   
}
void  DoublyLL::DeleteLast()
{
   
}
void  DoublyLL:: Display()
{
   
}         
int  DoublyLL:: CountNode()
{
 return Count;
}      
void  DoublyLL::InsertAtpos(int No,int iPos)
{
   
}
void  DoublyLL::DeleteAtpos(int iPos)
{
   
}
int main()
{
    
}