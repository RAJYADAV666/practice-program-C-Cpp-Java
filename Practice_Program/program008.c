 // Problem statment :Accept radius from user and calculate the area of circle

 //step 1: Understand the problem statment 
 // conclusion : We are going to use the formula  as PI*R*R

 // step 2:
            // Algorithm

            /* START
                    Accept radius from user and store into RADIUS
                    create variable as PI   and store value 3.14
                    Calculate area PI* RADIUS*RADIUS
                    Display the value of area to the user 
                    
                STOP    
            */



           #include<stdio.h>
           /////////////////////////////////////////////////////////////////
           //   Functio name: Calculate_area
           //   Description: It is usedd to calculate area of circle 
           //   Input: float
           //   output:float
           //   Auther Name: Raj kishor Yadav 
           //   Date: 23/09/2024
           /////////////////////////////////////////////////////////////////
           float Calculate_Area(float fvalue)
           {

                float PI=3.14;
                auto float fRes=0.0f;

                fRes=PI*fvalue*fvalue;

                return fRes;


           } 
           //////////////////////////////////////////////////////////////////
           //
           //       Entery point function
           //
           /////////////////////////////////////////////////////////////////
           int main()
           {
                 auto float fRADIUS=0.00f;
                 auto float fArea=0.0f;
                
                printf(" Enter the radius:\n");
                scanf("%f",&fRADIUS);

                fArea=Calculate_Area(fRADIUS);

                printf(" Area of circle is : %f ",fArea);

                return 0;

           }