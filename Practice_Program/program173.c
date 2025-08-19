// Singly Circular Link list 
#include<stdio.h>
#include<stdlib.h>

 typedef struct node
{   
    int data;
    struct node *next;


}NODE,*PNODE,**PPNODE;


void InsertFirst(PPNODE Head,PPNODE Tail,int No)
{
        PNODE newn=NULL;
        newn=(PNODE)malloc(sizeof(NODE));


        newn->data=No;
        newn->next=NULL;       

        if((*Head==NULL) &&(*Tail==NULL)) //LL is empty:
        {
                *Head=newn;   // Linklist Madhe Konach Nahi jaun Node Create Karyacaha:
                *Tail=newn;
              //  (*Tail)->next=*Head;                   // shevtachya Node madhe Philyacha Address tevyacha ahe 
        } 
        else  // LL containes One Node:
        {
               newn->next=*Head;
               *Head=newn;

             //  (*Tail)->next=*Head;

        }

        (*Tail)->next=*Head;   // comman lihal:
        

}
void InsertLast(PPNODE Head,PPNODE Tail,int No )
{
      PNODE newn=NULL;
        newn=(PNODE)malloc(sizeof(NODE));


        newn->data=No;
        newn->next=NULL;       

        if((*Head==NULL) &&(*Tail==NULL)) //LL is empty:
        {
                *Head=newn;
                *Tail=newn;
                (*Tail)->next=*Head;                   // shevtachya Node madhe Philyacha Address tevyacha ahe 
        } 
        else // LL contains At least 1 Node:
        {


                (*Tail)->next=newn;
                *Tail=newn;
                (*Tail)->next=*Head;

        }

}


void DeleteFirst(PPNODE Head,PPNODE Tail)
{
        if((*Head==NULL) &&(*Tail=NULL))
        {
            return ;
        }
       else  if((*Head==*Tail))
        {
            free(*Head);
            *Head=NULL;
            *Tail=NULL;
            
        }
        else
        {
            *Head=(*Head)->next;
           free((*Tail)->next);

           (*Tail)->next=*Head;

        }

    
    
         
}
void DeleteLast(PPNODE Head,PPNODE Tail)
{
    PNODE Temp=*Head;
      if((*Head==NULL) &&(*Tail=NULL))
        {
            return ;
        }
       else  if((*Head==*Tail))
        {
            free(*Head);
            *Head=NULL;
            *Tail=NULL;
            
        }
        else
        {
            while(Temp->next !=*Tail)
            {
                Temp=Temp->next;
            }

            free(*Tail);
            *Tail=Temp;

            (*Tail)->next=*Head; // circular nature:
        


        }


}

void Display(PNODE Head,PNODE Tail)
{

    printf("Elements of Linked List Are:\n");

        if((Head !=NULL)&&(Tail !=NULL))
        {
            do// kara
            {
                printf("|%d|->",Head->data);
                Head=Head->next;

            } while (Head !=Tail->next);

            printf("Address of First Node:\n");
            

        }

}
int Count(PNODE Head,PNODE Tail)
{
        int iCnt=0;

            if((Head !=NULL)&&(Tail !=NULL))
                do
                {
                     iCnt++;
                    Head=Head->next;
                

                } while (Head !=Tail->next);
                
        return iCnt;
}   
void InsertAtpost(PPNODE Head,PPNODE Tail,int No,int ipos)
{

        int size=0;
        size=Count(*Head,*Tail);

        PNODE newn=NULL;
        PNODE Temp=*Head;
        int i=0;


    if((ipos<1)||(ipos>size+1))
    {
        printf("Invalid Position:\n");
        return;
    }
    if(ipos==1)
    {
            InsertFirst(Head,Tail,No);

    }
    else if(ipos==size+1)
    {

        InsertLast(Head,Tail,No);
    }
    else    
    {       
            newn=(PNODE)malloc(sizeof(NODE));
            
            newn->data=No;
            newn->next=NULL;
        

        for(i=1;i<=ipos-1;i++)
        {
            Temp=Temp->next;

        }
            newn->next=Temp->next;
            Temp->next=newn; 

        
    }   


}
void DeleteAtpos(PPNODE Head,PPNODE Tail,int ipos) 
{
         int size=0;
        size=Count(*Head,*Tail);

        
        PNODE Temp=*Head;
        PNODE TargetNode=NULL;
        int i=0;


    if((ipos<1)||(ipos>size))
    {
        printf("Invalid Position:\n");
        return;
    }
    if(ipos==1)
    {
            DeleteFirst(Head,Tail);

    }
    else if(ipos==size)
    {

        DeleteLast(Head,Tail);
    }
    else    
    {       
                        
        for(i=1;i<=ipos-1;i++)
        {
            Temp=Temp->next;

        }

        TargetNode =Temp->next;
        Temp->next=Temp->next->next;

        free(TargetNode);


    }    
        

}
int main()
{

    PNODE First=NULL;
    PNODE Last=NULL;  // x
    int iRes=0;

    InsertFirst(&First,&Last,51);
    InsertFirst(&First,&Last,21);
    InsertFirst(&First,&Last,11);

    Display(First,Last);
    iRes=Count(First,Last);
    printf("The Number of Element is %d\n",iRes);

    InsertLast(&First,&Last,101);
    InsertLast(&First,&Last,111);
    InsertLast(&First,&Last,121);

    
    Display(First,Last);
    iRes=Count(First,Last);
    printf("The Number of Element is %d\n",iRes);

    InsertAtpost(&First,&Last,105,5);
    Display(First,Last);
    iRes=Count(First,Last);
    printf("The Number of Element is %d\n",iRes);

    DeleteAtpos(&First,&Last ,5);
    Display(First,Last);
    iRes=Count(First,Last);
    printf("The Number of Element is %d\n",iRes);



    DeleteFirst(&First,&Last);
    Display(First,Last);
    iRes=Count(First,Last);
    printf("The Number of Element is %d\n",iRes);


    DeleteLast(&First,&Last);
    Display(First,Last);
    iRes=Count(First,Last);
    printf("The Number of Element is %d\n",iRes);



    return 0;
}