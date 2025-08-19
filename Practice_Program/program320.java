import java.util.*;
import java .io.*;


class program320
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the String");
        String str=sobj.nextLine();

        str=str.trim();
        str=str.replaceAll("\\s+"," "); 
        String Words[]=str.split(" ");

        for(int i=0;i<Words.length;i++)
        {
            System.out.println(Words[i]+" Having length :"+Words[i].length());
        }
 
    }

}