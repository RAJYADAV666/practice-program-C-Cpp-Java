class node
{
    public int data;
    public node next;
    public node prev; // pointer 
 
   public node(int no)
    {
        data=no;
        next=null;
        prev=null; // #
    }
}
class DoublyLL
{
    private node first; // techer chya dokyatil value 
    private int Count;

    public DoublyLL()
    {
        first = null;
        Count = 0; 
    }

    public void Insertfirst(int no)
    {
        node newn = new node(no);

        if(first == null)
        {
            first = newn;
        }
        else
        {
            newn.next=first;
            first.next =newn; //#
            first = newn;

        }
         Count++;
    }
    public void InsertLast(int no)
    {
        node newn = new node(no);

        if(first == null)
        {
            first = newn;
            
        }
        else
        {
           node temp = first;

           while(temp.next !=null)
           {
            temp = temp.next;
           }
           temp.next =newn;
           newn.prev = temp; //#
            
        }
        Count++;

    }
   
    public void Deletefirst()
    {
        if(first ==null)
        {
            return;
        }
        else if(first.next ==null)
        {
            first = null; 
        }
        else
        {
            first =first.next;
            first.prev = null; // #
        }
        Count--;
    }
    public void DeleteLast()
    {
         if(first ==null)
        {
            return;
        }
        else if(first.next ==null)
        {
            first = null;
        }
        else
        {
            node Temp = first;

            while(Temp.next.next!=null)
            {
                Temp = Temp.next; 
            }

            Temp.next = null; 
          
        }
        Count--;
    }
    public void Display()
    {
        node temp = first;

        System.out.println("Elements of the Linked List are;");

        System.out.println("null<==>");

        while(temp !=null)
        {
            System.out.print("|"+temp.data+"|<==>");
            temp = temp.next;
            
        }
        System.out.println("null");
    }

    public int Count()
    {
        return Count;
    }
    public void InsertAtpos(int no,int ipos)
    {
        if((ipos< 1)||(ipos > (Count+1)))
        {
            System.out.println("Invalid Postion");
        }
        if(ipos ==1)
        {
            Insertfirst(no);

        }
        else if(ipos ==Count+1)
        {
            InsertLast(no);
        }
        else
        {
            node newn = new node(no);
            node temp = first;

            for(int i =1;i<ipos-1;i++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next.prev = newn; 

            newn.prev = temp;
            temp.next = newn ;

            Count++;
        }
    }
    public void DeleteAtpos(int ipos)
    {
         if((ipos< 1)||(ipos > (Count)))
        {
            System.out.println("Invalid Postion");
        }
        if(ipos ==1)
        {
            Deletefirst();
        }
        else if(ipos ==Count)
        {
            DeleteLast();
        }
        else
        {
             node temp = first;

            for(int i =1;i<ipos-1;i++)
            {
                temp = temp.next;
            }

            temp.next = temp.next.next;
            temp.next.prev = temp;   // #
        
            Count--; 
        }
    }
}
class program395
{
    public static void main(String arg[])
    {
        int iRet =0;

        DoublyLL obj = new DoublyLL();

        obj.Insertfirst(51);
        obj.Insertfirst(21);
        obj.Insertfirst(11);
        obj.Display();
        iRet = obj.Count();
        System.out.println("The Number of elements are"+iRet);

        obj.InsertLast(61);
        obj.InsertLast(71);
        obj.InsertLast(81);
        obj.Display();
        iRet = obj.Count();
        System.out.println("The Number of elements are"+iRet);

        obj.Deletefirst();
        obj.Deletefirst();
        obj.Display();
        iRet = obj.Count();
        System.out.println("The Number of elements are"+iRet);

        obj.DeleteLast();
        obj.DeleteLast();
        obj.Display();
        iRet = obj.Count();
        System.out.println("The Number of elements are"+iRet);

        obj.InsertAtpos(12,3);
        obj.Display();
        iRet = obj.Count();
        System.out.println("The Number of elements are"+iRet);

        obj.DeleteAtpos(3);
        obj.Display();
        iRet = obj.Count();
        System.out.println("The Number of elements are"+iRet);
    }
}