
import java .util.*;
class program243  
{
        public static int ToggleBit(int iValue )
        {
                int iMask=0X00000040;
                int iResult;

                iResult=(iValue ^iMask); // 7 th bit is on or off

                return iResult;

        }

    public static void main(String Arg[])
    {

        Scanner sobj=new Scanner(System.in);

        int No=0;
        int iAns=0;


        System.out.println("Enter  the number:");
        No=sobj.nextInt();

        iAns=ToggleBit (No);
        System.out.println("Updated Number is "+iAns);


    }


}