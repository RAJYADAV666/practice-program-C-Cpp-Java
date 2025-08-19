import java .util.*;
class program226
{
    public static void main(String Arg[])
    {

        Scanner sobj= new Scanner(System.in);
        int iNo=0;
        int iMask=4;
        int iresult=0;


        System.out.println("Enter the Number:\n");
        iNo=sobj.nextInt();

        iresult=iNo & iMask;

        if(iresult==iMask)
        {
            System.out.println(" 3 rd Bit is ON");
        }
        else
        {
            System.out.println(" 3 rd Bit is OFF");
        }



    }

}

