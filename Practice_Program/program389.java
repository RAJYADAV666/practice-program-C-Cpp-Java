class program389
{
    public static void main(String arg[])
    {
        SinglyLL obj = new SinglyLL();
        int iRet=0;


        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);
        
        obj.Display();

        iRet=obj.Count();
        System.out.println("Number of Element are:"+iRet);


        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);
 
        obj.Display();

        iRet=obj.Count();
        System.out.println("Number of Element are:"+iRet);

        obj.InsertAtpost(105,5);
        obj.Display();
        iRet=obj.Count();
        System.out.println("Number of Element are:"+iRet);



        obj.DeleteFirst();
        obj.Display();

         iRet=obj.Count();
        System.out.println("Number of Element are:"+iRet);
        
        
        obj.DeleteLast();
        obj.Display();

        iRet=obj.Count();
        System.out.println("Number of Element are:"+iRet);
        
        obj.DeleteAtpos(5);
        obj.Display();

        iRet=obj.Count();
        System.out.println("Number of Element are:"+iRet);
        

    }
}
class SinglyLL
{
    private node first;
    private int Count;


    public SinglyLL()
    {
        first =null;
        Count=0;

    }
    public void InsertFirst(int no)
    {                           
        node newn=new node(no);   

        if(first==null) //LL is Empty;
        {
            first=newn;   
        }
        else
        {
            newn.next=first;
            first=newn;
        }   
        Count++;             

    }               
    public void InsertLast(int no)
    {
       node newn=new node(no);
      

        if(first==null)
        {
            first=newn;
            
        }
        else
        {   
             node temp=first;

             while(temp.next !=null)
             {
                temp=temp.next;
             }

             temp.next=newn;

        }
        Count++;

    }
    
    public void DeleteFirst()
    {
         if(first==null) //LL Contains single node
        {
            return ;            
        }
        else if(first.next==null)// LL contains more than one Node
        {
            first=null; // teacherchya dokatali value 0 keli:
        }
        else // LL contains more than one node
        {
            first=first.next; 
              // first madhe direct next cha address patav 


        }   
        Count--;
    }
    public void DeleteLast()
    {
        if(first==null) //LL Contains single node
        {
            return ;            
        }
        else if(first.next==null)// LL contains more than one Node
        {
            first=null; // teacherchya dokatali value 0 keli:
        }
        else // LL contains more than one node
        {
            node temp=first;

            while(temp.next.next !=null)
            {
                temp=temp.next;

            }
            temp.next=null;

        }   
        Count--;
    }
    public void Display()
    {
        node temp=first;

     System.out.println("Elments of Linked List are:");

        while(temp !=null)
        {
            System.out.print("|"+temp.data+"|->");
             temp=temp.next;
        }

        System.out.println("NULL:");
        
    }
    public int  Count()
    {
        return Count;       
    }
    public void InsertAtpost(int no,int iPos)
    {
    

        if((iPos<1) ||(iPos > (Count+1)))
        {
            System.out.println("Inavalid Position");
            return;
        }
        else if(iPos==1)
        {
            InsertFirst(no);
        }
        else if(iPos==Count+1)  
        {
            InsertLast(no);
        }
        else
        {
             node newn =new node(no);
             node temp=first;

             for(int i=1;i< iPos-1;i++)
             {
                temp=temp.next;
             }
                newn.next=temp.next;
                temp.next=newn;

                Count++;
        }      
        
    }
    public void DeleteAtpos(int iPos)
    {
         if((iPos<1) ||(iPos > Count))
        {
            System.out.println("Inavalid Position");
            return;
        }
        else if(iPos==1)
        {
            DeleteFirst();
        }
        else if(iPos==Count)  
        {
            DeleteLast();
        }
        else
        {
             node temp=first;

             for(int i=1;i< iPos-1;i++)
             {
                temp=temp.next;
             }
                temp.next=temp.next.next;

                Count--;
        }   
    }

}
class node// struct node 
{
  public  int data;   // struct node *next;
  public  node next;  

  public node(int no)
  {
    data=no;
    next=null;
  }
}
