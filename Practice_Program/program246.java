
import java .util.*;
class program246
{ // user kaddun position ghene :
        public static int OffBit(int iValue ,int ipos)
        {
                int iMask=0X00000001;
                int iResult=0;

                iMask=iMask<<(ipos-1);

                iResult=iValue & iMask;

                if(iResult==iMask)
                {
                    return (iValue ^ iMask);
                }
                else
                {
                     return iValue ;

                }
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

        iAns=OffBit(No,ipos );
        System.out.println("Updated Number is "+iAns);


    }


}