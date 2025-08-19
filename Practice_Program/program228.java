import java .util.*;
class program228
{
    public static boolean CheckBit(int iValue)
    {
        int iMask=256;
        int iresult=0;

         iresult=iValue & iMask;

        if(iresult==iMask)
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

        Scanner sobj= new Scanner(System.in);
        int iNo=0;
        boolean bret=false;

        System.out.println("Enter the Number:\n");
        iNo=sobj.nextInt();

        bret=CheckBit(iNo);

            if(bret==true)
            {
                System.out.println(" 9 th bit is on");
            }    
             else
            {
                System.out.println(" 9 th bit is off");
            }     
      


    }

}

