import java.util.*;
import lb.Matrix;


class program381
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0,iValue=0 ;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();

        
        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        // Function calls
        iRet=mobj.Countodd(iValue);
        System.out.println("Odd count is  "+iRet);


        mobj = null;
        System.gc();
    }
}
class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public int Countodd(int iNo)
    {
        int i = 0, j = 0,  iCount=0;

        for(i = 0 ; i < Arr.length; i++)
        {
            
            for(j = 0 ; j < Arr[i].length; j++)
            {
                if(Arr[i][j] % 2==1)
                {
                    iCount++;
                }
               
            }
           
        }
        return iCount;
    }
}


    