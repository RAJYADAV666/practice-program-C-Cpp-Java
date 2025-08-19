// Problem statment : Accept 2 values from user and perfrom the addition 

// step 1: understand the program statement 
// conclusion : we have to accept 2 integer and perfrom its addition 

// step 2: write  the algorithm 
/*
    START
         Accept first number from user and store it into no1
         Accept second number from user and store it into no2
         create one variable to store the result named as Ans
         perfrom Addition of no1 and no2 , stire the result in Ans
         Display the result from Ans to the user
    STOP        

*/

// step 3: Decide the programing language ( c/c++/java/python)
//we select c programing 

//step 4: Write the program using c 

#include<stdio.h>
/////////////////////////////////////////////////////////
//  
//   Function Name: Additiom
//   Description: It is usrd to perfrom addition of two integers 
//   Input arguments: Integer , Integer   
//   Output: Integer    
//   Author:  Raj Kishor Yadav 
//   Date:  21/09/2024  (Update: 02/10/2024) // upadate kelayanatar as lihyach ast 
////////////////////////////////////////////////////////  
int Addition( int iNo1 ,int iNo2)
{
        int iSum=0; // variable to store  the value of addition 
        iSum=iNo1+ iNo2;
  
        return iSum;

}
///////////////////////////////////////////////////////////
//
// Entry point function of an application which perfroms Addition  of 2 integers 
//
//////////////////////////////////////////////////////////
int main()
{
      auto int ivalue1=0; // variable to store first input
      auto int ivalue2=0; // variable to store second input 
      auto int iAns=0;  // variable to store the result 


    printf(" Enter first number:\n");
    scanf("%d",&ivalue1);

    printf("Enter second number:\n");
    scanf("%d",&ivalue2);

    iAns=Addition(ivalue1,ivalue2); // Function call to perfrom the addition 

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