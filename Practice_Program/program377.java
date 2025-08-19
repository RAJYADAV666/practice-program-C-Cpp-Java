import java.util.*;
import lb.Matrix;

class program377
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
    
       mobj.SummationRow();

        mobj=null; // sangtoy objectchi memorey deallocate kar 
        System.gc();

    }
    
}

class MyMatrix extends Matrix  // tych class la acess hot jayame extend class kealy 
{
    public Mymatrix(int A,int B)
    {
        super(A,B);
    }

    public void  SummationRow()
    {
        int i=0; 
        int j=0;
        int iSum=0;

        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[0].length;j++)
            {
                if(Arr[])

                
            }
            System.out.println("Summation of Row:"+(i+1)+"is"+iSum);
            iSum=0;
        }


    }
         
}
