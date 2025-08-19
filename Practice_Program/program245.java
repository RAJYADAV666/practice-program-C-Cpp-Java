
import java .util.*;
class program245
{ // user kaddun position ghene :
        public static int ToggleBit(int iValue ,int ipos)
        {
                int iMask=0X00000001;
                int iResult=0;

                iMask=iMask<<(ipos-1);

                iResult =iValue ^ iMask;

                return iResult;

        }

    public static void main(String Arg[])
    {

        Scanner sobj=new Scanner(System.in);

        int No=0;
        int ipos=0;
        int iAns=0;


        System.out.println("Enter  the number:");
        No=sobj.nextInt();

        System.out.println("Enter  the Position:");
        ipos=sobj.nextInt();

        iAns=ToggleBit (No,ipos );
        System.out.println("Updated Number is "+iAns);


    }


}