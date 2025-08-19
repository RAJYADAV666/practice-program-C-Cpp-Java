import java .util .*;
/*      1   *    2   *    3   *    4     *     5  *        */
class program208
{
    public static void Pattern(int iNo)
    {
            int iCnt=0;
            


            for(iCnt=1;iCnt<=iNo * 2;iCnt++)
            {
                if((iCnt % 2)==0)
                {

                    System.out.print("*\t");
                }
                else
                {
                    System.out.print(+iCnt);
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

            Pattern(iValue);


        }









}