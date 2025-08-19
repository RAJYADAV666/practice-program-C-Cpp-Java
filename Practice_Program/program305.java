import java .util.*;
import java .io.*;

class program305
{
        public static void main(String arg[])  throws Exception
        {  
             Scanner sobj=new Scanner(System.in);


            System.out.println("Enter the name of Packed File that you want to Unpack:");
            String PackedFile=sobj.nextLine();

            File fobj=new File(PackedFile);

            FileInputStream fiobj=new FileInputStream(fobj);

            byte Header[]=new byte[100]; 

            fiobj.read(Header,0,100); 

            String Hstr=new String(Header);                       

            System.out.println(Hstr);

            System.out.println("Length of Header is :"+Hstr.length());



            }

}