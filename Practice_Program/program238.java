import java .util.*;
class program238
{
    public static void main(String Arg[])
    {

        Scanner sobj= new Scanner(System.in);
        int iNo=0;
        int iMask=0X00004040;
        int iresult=0;

        

        System.out.println("Enter the Number:\n");
        iNo=sobj.nextInt();

     iresult=iNo & iMask;

        if(iresult==iMask)
        {
            System.out.println(" 7 & 15 Bit is ON");
        }
        else
        {
            System.out.println(" 7  & 15Bit is OFF");
        }

      


    }

}

