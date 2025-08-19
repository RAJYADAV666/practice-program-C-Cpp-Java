#include<stdio.h>

void Display(int iRow,int iCol)
{ 
        int i=0;           // 1    2    3   4
        int j=0;           // *    *    *   *
                           // 1    2    3   4
                            // *    *    *   *                     
 

        for(i=1;i<=iRow;i++)
        {
               
            
                for(j=1;j<=iCol;j++)
                {
                        if((i % 2)==0)
                        {
                            printf(" *\t");
                        }
                        else 
                        {
                            printf(" %d\t",j);
                        }
                
                }
                    printf("\n");
                
        }

}
int main()
{
        int iNo1=0;
        int iNo2=0;
        

    printf(" Enter the  Number of Rows:\n");
    scanf("%d",&iNo1);

    printf(" Enter the number of Column:\n");
    scanf("%d",&iNo2);

        Display(iNo1,iNo2);

    return 0;
}