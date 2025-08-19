import java .util.*;
import java .io.*;

class program303
{
        public static void main(String arg[])  throws Exception
        {  
             Scanner sobj=new Scanner(System.in);


            System.out.println("Enter the name of Packed File that you want to Unpack:");
            String PackedFile=sobj.nextLine();

            File fobj=new File(PackedFile);

            FileInputStream fiobj=new FileInputStream(fobj);

            byte Header[]=new byte[100]; // byte cha array tayar kela 
            // ehte byte la conver karyachi garaj nahiye karan apan packing chya filemadhe convert kelelea ahe 
            // me 100 byte evda data vachanar ahe ha data tya header madhe ahe 
            fiobj.read(Header,0,100); // ani me read header input detoy mhnje jo data ahe to vachyala deto natar 0 he index detoy ki thithun
                                      // vachauala chalu kar ani 100 byte evde data vach ani thamab                       


            System.out.println(Header);


            }




}