#include<stdio.h>

 void DisplayExamTime(int iStanderd)
{
        switch(iStanderd)
        {
                case 1:
                        printf(" Your exam is 8 pm..\n ");
                        break;

                case 2:
                        printf("Your exam is at 9 pm..\n");
                        break;

                case 3:  
                        printf("Your exam is at 10 am..\n");
                        break;

                case 4:
                        printf(" Your exam is at 11 am..\n");
                        break;

                case 5:
                        printf(" Your exam is at 12 am..\n ");
                        break;                
                default :
                            printf("Wrong input\n");
                                            

        }

}
int main()
{
        int iValue=0;

        printf(" Enter your Standerd..\n");
        scanf("%d",&iValue);

        DisplayExamTime(iValue);



    return 0;
}