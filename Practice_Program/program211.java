import java .util.*;

class program211
{

    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iSize=0;
        int iCnt=0;

        System.out.println("Enter the number of Elment:");
        iSize=sobj.nextInt();

        int Arr[]=new int [iSize];

        System.out.println("Enter the Elments:");

        for(iCnt=0;iCnt<iSize;iCnt++)
        {

                Arr[iCnt]=sobj.nextInt();


        }

        System.out.println("Elements of the Array are:");

        for(iCnt=0;iCnt<iSize;iCnt++)
        {

            System.out.println(Arr[iCnt]);
        }

        sobj.close();


    }




}