
import java .util.*;
class program242  // chalu asleli bit band karyachi ahe;
{
        public static int OffBit(int iValue )
        {
                int iMask=0X00020000;
                int iresult=0;

                iresult=iValue & iMask;

                if(iresult==iMask)  //18 th bit on 
                {
                    return (iValue ^iMask);
                }
                else             
                {
                        return iValue; // 18 th bit is off

                }



        }

    public static void main(String Arg[])
    {

        Scanner sobj=new Scanner(System.in);

        int No=0;
        int iAns=0;


        System.out.println("Enter  the number:");
        No=sobj.nextInt();

        iAns=OffBit(No);
        System.out.println("Updated Number is "+iAns);


    }


}