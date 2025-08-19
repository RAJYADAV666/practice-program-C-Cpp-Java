import java .util.*;

class program360
{

    public static void main(String Arg[])
    {
        int iRow=0;
        int iCol=0;


        Scanner sobj= new Scanner(System.in);

        System.out.println("Enter the Number of rows:");
        iRow=sobj.nextInt();

        System.out.println("Enter the Number of Coloumns:");
        iCol=sobj.nextInt();

        int Arr[][]=new int [iRow][iCol];
        int i=0;
        int j=0;

        System.out.println("Enter the Element:");

        for( i=0;i<iRow;i++)
        {
            for( j=0;j<iCol;i++)
            {
                Arr[i][j]=sobj.nextInt(); // input taka 
            }

        }

        System.out.println("Entered Elment Are:");

         for( i=0;i<iRow;i++)
        {
            for( j=0;j<iCol;i++)
            {
               System.out.print(Arr[i][j]+"\t");
            }

            System.out.println();

        }




    }

}
