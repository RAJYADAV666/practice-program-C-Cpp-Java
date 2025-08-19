class node
{
    public int data;
    public node next;
 
   public node(int no)
    {
        data=no;
        next=null;
    }
}
class SinglyLL
{
    private node first; // techer chya dokyatil value 
    private int Count;

    public SinglyLL()
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

           temp.next = newn;
        }
        Count++;

    }
    public void InsertAtpos(int no,int ipos)
    {

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
    public void DeleteAtpos(){}
    public void Display()
    {
        node temp = first;

        System.out.println("The LinkedList Element are");
        while(temp !=null)
        {
            System.out.print("|"+temp.data+"|->");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public int Count()
    {
        return Count;
    }
    

}
class program392
{
    public static void main(String arg[])
    {
        int iRet =0;

        SinglyLL obj = new SinglyLL();

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
 
    }
}