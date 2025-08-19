import java .util .*;

class program204
{
    public static void EvenOddFactor(int iNo)
    {
            int iCnt=0;

            for(iCnt=1;iCnt<=iNo;iCnt++)
            {

                if((iNo % iCnt)==0)
                {

                    if((iCnt % 2)==0 )
                    {
                        System.out.println("Even factor is :"+iCnt);
                    }
                    else
                    {
                        System.out.println("Odd factor is:"+iCnt);
                    }
                }



            }


    }
    


        public static void main(String Arg[])
        {
            Scanner sobj=new Scanner(System.in);

            int iValue=0;
            int iAns=0;


            System.out.println("Enter the Number:\n");
            iValue=sobj.nextInt();

            EvenOddFactor(iValue);


        }









}