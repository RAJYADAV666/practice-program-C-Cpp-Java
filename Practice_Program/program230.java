import java . util.*;
class program230
{

    public static int Addition(int iValue1,int iValue2)
    {
            int iRes=0;

            iRes=iValue1+iValue2;

            return iRes;


    }


    public static void main(String Arg[])
    {
        int No1=0;
        int No2=0;
        int iAns=0;
        
        Scanner sobj=new Scanner(System.in);

        System.out.println(" Enter the First Number:\n");
        No1=sobj.nextInt();

        System.out.println(" Enter the First Number:\n");
        No2=sobj.nextInt();


        iAns=Addition(No1,No2);

        System.out.println(" The Addition is"+iAns);

    }



}