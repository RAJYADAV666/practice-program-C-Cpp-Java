import java .util.*;
import Marvellous. Airthmatic;
class program200
{

    public static void main(String Arg[])
    {

            Scanner sobj=new Scanner(System.in); // scanner class ch object create kelea 
                                                // system in mhnje apan input ghenare tymule 
           
            int iNo1=0 ,  iNo2=0;
            int iAns=0;

            System.out.println("Enter First number:\n ");
            iNo1=sobj.nextInt();

            System.out.println("Enter Second  number:\n ");
            iNo2=sobj.nextInt();

              Airthmatic aobj=new  Airthmatic(iNo1,iNo2);


            iAns= aobj.Addition();
             System.out.println("Addition is :"+iAns);
         
    }


}// 1: javac -d . Airthmatic.java
// javac program200.java
//java program200