import java .util.*;
class program225
{
    public static void main(String Arg[])
    {

        Scanner sobj= new Scanner(System.in);
        int iNo=0;
        int iDigit=0;
        int iCnt=0;

        

        System.out.println("Enter the Number:\n");
        iNo=sobj.nextInt();


        while(iNo !=0)
        {
            iDigit=iNo%2;
     

            if(iDigit==1)
            {
                iCnt++;
            }
  
                 iNo=iNo/2;  
        }
          System.out.println(" Number of 1 Bit is "+iCnt);

    


    }

}

