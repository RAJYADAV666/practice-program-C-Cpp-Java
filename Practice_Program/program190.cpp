//Singly Circular:
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

class SinglyCL
{
    private:
           PNODE First;
           PNODE Last;
           int Count; 

    public :      
            SinglyCL(); 
           
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
SinglyCL::SinglyCL()
{
    First=NULL;
    Last=NULL;
    Count=0;

}   
void  SinglyCL::InsertFirst(int No)
{ 
    
}
void SinglyCL::InsertLast(int No)
{     
   
}
void SinglyCL::DeleteFirst()
{
   
}
void SinglyCL::DeleteLast()
{
   
}
void SinglyCL:: Display()
{
   
}         
int SinglyCL:: CountNode()
{
 return Count;
}      
void SinglyCL::InsertAtpos(int No,int iPos)
{
   
}
void SinglyCL::DeleteAtpos(int iPos)
{
   
}
int main()
{
    
}