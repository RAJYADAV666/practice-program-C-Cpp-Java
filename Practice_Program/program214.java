import java .util.*;

class program214
{

        public static int Addition(int Brr[])
        {
            int iCnt=0;
            int isum=0;
            for(iCnt=0;iCnt<Brr.length;iCnt++)
            {
                    isum=isum+Brr[iCnt];


            }
            System.out.println();

            return isum;


        }


    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iSize=0;
        int iCnt=0;
        int iAns=0;


        System.out.println("Enter the number of Elment:");
        iSize=sobj.nextInt();

        int Arr[]=new int [iSize];

        System.out.println("Enter the Elments:");

        for(iCnt=0;iCnt<iSize;iCnt++)
        {

                Arr[iCnt]=sobj.nextInt();


        }

        iAns=Addition(Arr);
        System.out.println("The Addition of Elment is "+iAns);



       


    }




}
