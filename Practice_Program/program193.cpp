
//DoublyLL circular:
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

class DoublyCL
{
    private:
           PNODE First;
           PNODE Last;
           int Count; 

    public :      
            DoublyCL();  // constructer
           
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
 DoublyCL::DoublyCL() // 1 st Class Name and 2 nd is Function Name
{
    First=NULL;
    Last=NULL;

    Count=0;

}   
void DoublyCL::InsertFirst(int No)
{ 
    
}
void  DoublyCL::InsertLast(int No)
{     
   
}
void  DoublyCL::DeleteFirst()
{
   
}
void   DoublyCL::DeleteLast()
{
   
}
void   DoublyCL:: Display()
{
   
}         
int  DoublyCL:: CountNode()
{
 return Count;
}      
void   DoublyCL::InsertAtpos(int No,int iPos)
{
   
}
void  DoublyCL::DeleteAtpos(int iPos)
{
   
}
int main()
{
    
}