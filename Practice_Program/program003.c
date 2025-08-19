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
    int i,j,k;

    printf(" Enter first number:\n");
    scanf("%d",&i);

    printf("Enter second number:\n");
    scanf("%d",&j);

    k=i+j;

    printf(" Addition is : %d\n",k);


    return 0;

}