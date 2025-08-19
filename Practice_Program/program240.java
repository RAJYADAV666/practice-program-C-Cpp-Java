import java .util.*;
class program240  // chalu asleli bit band karyachi ahe;
{
        public static int OffBit(int iValue )
        {
                int iMask=0X00000008;
                int iresult=0;

                iresult=iValue & iMask;

                if(iresult==iMask) // 4 th bit is on :
                {
                    return (iValue ^iMask);
                }
                else              // 4 the bit is off:
                {
                        return iValue;

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