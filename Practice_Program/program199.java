import java .util.*;
class program199
{

    public static void main(String Arg[])
    {

            Scanner sobj=new Scanner(System.in);
            Arithmatic aobj=new Arithmatic();

            int iNo1=0 ,  iNo2=0;
            int iAns=0;

            System.out.println("Enter First number:\n ");
            iNo1=sobj.nextInt();

            System.out.println("Enter Second  number:\n ");
            iNo2=sobj.nextInt();

            iAns= aobj.Addition(iNo1,iNo2);
             System.out.println("Addition is :"+iAns);
         
    }


}
class Arithmatic
{   



    public int Addition(int iValue1,int iValue2)
    {
            int iSum=0;

            iSum=iValue1+iValue2;
            return iSum;

    }


}