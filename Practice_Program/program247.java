
import java .util.*;
class program247
{ // user kaddun position ghene :
        public static boolean  CheckBit(int iValue ,int ipos)
        {
                int iMask=0X00000001;
                int iResult=0;

                iMask=iMask<<(ipos-1);

                iResult=iValue & iMask;

                if(iResult==iMask)
                {
                    return true ;
                }
                else
                {
                     return false; 

                }
        }

    public static void main(String Arg[])
    {

        Scanner sobj=new Scanner(System.in);

        int No=0;
        int ipos=0;
        int iAns=0;
        boolean bret=false;


        System.out.println("Enter  the number:");
        No=sobj.nextInt();

        System.out.println("Enter  the Position:");
        ipos=sobj.nextInt();

               bret= CheckBit(No,ipos);

                if(bret==true)
                {

                    System.out.println("Bit is ON at the given the position :");
                }
                else
                {

                   System.out.println("Bit is OFF at the given Position ");     
                }



    }


}