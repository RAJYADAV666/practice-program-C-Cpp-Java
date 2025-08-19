import java .util.*;
class program223
{
    public static void main(String Arg[])
    {

        Scanner sobj= new Scanner(System.in);
        int iNo=0;
        int iDigit=0;

        

        System.out.println("Enter the Number:\n");
        iNo=sobj.nextInt();


        while(iNo !=0)
        {
            iDigit=iNo%2;

            iNo=iNo/2;  // binary aselya mule 2 ne divide 

            System.out.print(iDigit);


        }

        System.out.println();


    }

}

