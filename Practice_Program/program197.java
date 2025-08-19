import java.io.*;
class program197
{

    public static void main(String Arg[]) throws Exception
    {

           BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in));
            int iNo1=0 ,  iNo2=0;
            int iAns=0;
    try
    {
            System.out.println("Enter First number:\n ");
            iNo1=Integer.parseInt(bobj.readLine());

            System.out.println("Enter Second  number:\n ");
             iNo2=Integer.parseInt(bobj.readLine());


            iAns=iNo1+iNo2;

            System.out.println("Addition is :"+iAns);
    }
        catch(Exception eobj)
        {
            System.out.println("Exception occured:\n");
        }

    }


}