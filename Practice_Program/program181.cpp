
// Singly LinkList 
#include<iostream>

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

            }

            void InsertFirst(int No)
            {

            }
             void InsertLast(int No)
             {

             }
              void InsertAtpos(int iPos)
              {

              }
              void Deletefirst(int No)
              {

              }
              void Deletelast(int No)
              {

              }
              void DeleteAtpos(int iPos)
              {

              }
              void Display()
              {
                
              }



};
int main()
{
    
    return 0;
}