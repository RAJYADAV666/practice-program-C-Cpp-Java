// Problem statment : Accept 2 values from user and perfrom the addition 

// step 1: understand the program statment 
// conclusion : we have to accept 2 integer and perfrom its addition 

// step 2: write  the algorithm 
/*
    START
         Accept first number from user and store it into no1
         Accept second number from user and store it into no2
         create one variable to store the result named as Ans
         perfrom Addition of n01 and no2 , stire the result in Ans
         Display the result from Ans to the user
    STOP        

*/

// step 3: Decide the programing language ( c/c++/java/python)
//we select c programing 

//step 4: Write the program using c 

#include<stdio.h>
int main()
{
      auto int ivalue1=0;
      auto int ivalue2=0;
      auto int iAns=0;


    printf(" Enter first number:\n");
    scanf("%d",&ivalue1);

    printf("Enter second number:\n");
    scanf("%d",&ivalue2);

    iAns=ivalue1+ivalue2;


    printf(" Addition is : %d\n",iAns);


    return 0;

}
// step 5: test the code 
/*
    Test case 1:
    Input :10 0
    Output :10

    Test case 2:
    Input :10 11
    Output :21

    Test case 3:
    Input :12 -6
    Output :6

    Test case 4:
    Input :-6 -5
    Output :11



*/