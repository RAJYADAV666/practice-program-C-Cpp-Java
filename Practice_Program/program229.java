import java .util.*;
class program229
{
    public static boolean CheckBit(int iValue)
    {
        int iMask=65536;
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
                System.out.println(" 17 th bit is on");
            }    
             else
            {
                System.out.println(" 17 th bit is off");
            }     
      


    }

}

