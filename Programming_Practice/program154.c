#include<stdio.h>
#include<stdlib.h>

// structure Declartion 
struct Node
{


    int data; // 4 Byte 
    struct Node *next;// 8 Byte // me pudchya mulachya angavar maza hat taknare 
    // pudchya node la point karnara 
};

typedef struct node NODE;
typedef struct node * PNODE; // single pointer 
typedef struct node **PPNODE; // pointer to pointer 


int main()
{

    PNODE first=NULL;

 
    return 0;
}