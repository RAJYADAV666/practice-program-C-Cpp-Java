import java .util.*;

class program233
{
    public static boolean CheckBit(int iValue)
    {

            int iMask=260;
            int ires=0;

           ires=iValue & iMask;

            if(ires==iMask)
            {
                return true;
            }
            else
            {
                return false;
            }



    }
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iNo=0;
        boolean bret=false;


        System.out.println("Enter the Number:");
        iNo=sobj.nextInt();

        bret=CheckBit(iNo);

        if(bret==true)
        {
            System.out .println(" 3 th & 9 th Bits Are ON");

        }
        else
        {
            System.out.println("3 th & 9 th Bits Are OFF");

        }





    }




}