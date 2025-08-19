import java.util.*;

class Matrix
{
    protected  int Arr[][];

    public Matrix(int A,int B)
    {
        Arr=new int[A][B];

    }
    protected void finalize()
    {
        Arr=null; // aytomatically memorey deallocate hote 

    }
    public void Accept()
    {   
       
        Scanner sobj=new Scanner(System.in);
        int i=0;
        int j=0;

        System.out.println("Enter the Elments:\n");

        for(i = 0; i < Arr.length; i++)   
        {    
            for(j = 0; j < Arr[i].length; j++)   
            {
                Arr[i][j] = sobj.nextInt(); 
            }
        }

    }
    public void Display()
    {
          int i=0;
          int j=0;

       System.out.println("Entered elements are:");   

        for(i = 0; i <Arr.length ; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");

            } 

            System.out.println();
        }

    }
   
}
