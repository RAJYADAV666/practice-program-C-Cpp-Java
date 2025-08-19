import java .util.*;
import java .io.*;

class program326
{
        public static void main(String arg[])  throws Exception
        {  

            byte Header[]=new byte[100];

            int Filesize=0; 
            String str=null;   
            int iRet=0;

            Scanner sobj=new Scanner(System.in);


            System.out.println("Enter the name of Packed File that you want to Unpack:");
            String PackedFile=sobj.nextLine();

            File fobj=new File(PackedFile);
            FileInputStream fiobj=new FileInputStream(fobj);

        

        while((iRet=fiobj.read(Header,0,100))>0 )
        {
           
            String Hstr=new String(Header);                     

            str=Hstr.trim();
            String Tokens[]=str.split(" ");// return value array of string mahnje 2 part milanar aplyala 
            
             
            File NewFile=new File(Tokens[0]);
             NewFile.createNewFile();

            Filesize =Integer.parseInt(Tokens[1]);

           byte Buffer[]=new byte[Filesize];
           fiobj.read(Buffer,0,Filesize);

           FileOutputStream foobj=new FileOutputStream(NewFile);
           foobj.write(Buffer,0,Filesize);

        }
            }

}