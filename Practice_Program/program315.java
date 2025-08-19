import java.util.*;
import java .io.*;


class program315
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the String");
        String str=sobj.nextLine();

        str=str.trim();

        System.out.println("After trim:"+str);

        str=str.replaceAll("\\s+"," ");  // jith 2 space ahet thith 1 space ghala 
                             
        System.out.println("After replacell"+str);

        

 
    }






}