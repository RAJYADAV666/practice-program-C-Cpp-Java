import java.util.*;
import java .io.*;


class program314
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the String");
        String str=sobj.nextLine();

        str=str.trim();

        System.out.println("After trim:"+str);

        str=str.replaceAll("\\s",""); // indicate multiple whitespeces
                             // regular expression ahe    

        System.out.println("After replacell"+str);

        


        


       

    }






}