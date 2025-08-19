import java .util .*;

class program206
{
    public static void EvenOddFactor(int iNo)
    {
            int iCnt=0;
            int iSumEven=0;
            int iSumOdd=0;

            for(iCnt=1;iCnt<=iNo;iCnt++)
            {

                if((iNo % iCnt)==0)
                {

                    if((iCnt % 2)==0 )
                    {
                        iSumEven=iSumEven+iCnt;
                    }
                    else
                    {
                       iSumOdd=iSumOdd+iCnt;
                    }
                }



            }

            System.out.println("Addition of Even Factor is :"+iSumEven);
            System.out.println("Addition of Odd Factor is :"+iSumOdd);

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