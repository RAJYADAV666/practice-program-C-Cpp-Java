class program387
{
    public static void main(String arg[])
    {
        SinglyLL obj = new SinglyLL();
        int iRet=0;


        obj.InserFirst(51);
        obj.InserFirst(21);
        obj.InserFirst(11);
        
        obj.Display();

        iRet=obj.Count();
        System.out.println("Number of Element are:"+iRet);


        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);

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
    public void InserFirst(int no)
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
    public void InsertAtpost(int No,int ipos){}
    public void DeleteFirst()
    {
        

    }
    public void DeleteAtpos(int ipos){}
    public void Display()
    {
        node temp=first;

     System.out.println("Elments of Linked List are:");

        while(temp !=null)
        {
            System.out.print("|"+temp.data+"|");
             temp=temp.next;
        }

        System.out.println("NULL:");
        
    }
    public int  Count()
    {
        return Count;
        
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
