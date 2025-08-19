import java.util.*;
class program371
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
    
       MyMatrix mobj=new MyMatrix(iRow,iCol);
        mobj.Accept();
        mobj.Display();
    
        int iRet=0;
 
        iRet=mobj.Minimum();
        System.out.println("LowestElement is "+iRet);

        mobj=null; // sangtoy objectchi memorey deallocate kar 
        System.gc();

    }
    
}
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

class MyMatrix extends Matrix  // tych class la acess hot jayame extend class kealy 
{
    public MyMatrix(int A,int B)
    {
        super(A,B);
    }
     public int Minimum()
    {
        int iMin=Arr[0][0];
    
        int i=0;
        int j=0;

        for(i = 0; i<Arr.length ; i++)
        {
            for(j = 0; j< Arr[i].length; j++)
            {
                if(Arr[i][j] < iMin)
                {
                    iMin=Arr[i][j];
                }

            } 
             System.out.println();
        }
         
        return iMin;

    }
        
}
