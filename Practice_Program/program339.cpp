#include<iostream>
using namespace std;

class Arithmatic
{

public:
        int No1;
        int No2;

        Arithmatic(int A, int B)
        {
            this->No1=A;
            this->No2=B;

        }
        int Addition()
        {
            int Ans=0;
            Ans=No1+No2;
            return Ans;
        }
         int subtraction()
        {
            int Ans=0;
            Ans=No1-No2;
            return Ans;
        }
         int Multiplication()
        {
            int Ans=0;
            Ans=No1*No2;
            return Ans;
        }
         int Division()
        {
            int Ans=0;
            Ans=No1/No2;
            return Ans;
        }
        


};
int main()
{


    
    Arithmatic aobj(12,14);

    int Ret=0;

    Ret=aobj.Addition();
    cout<<"Addition is :"<<Ret<<"\n";

    Ret=aobj.subtraction();
    cout<<"subtraction is :"<<Ret<<"\n";

    Ret=aobj.Multiplication();
    cout<<"Multiplication is :"<<Ret<<"\n";

     Ret=aobj.Division();
    cout<<"Addition is :"<<Ret<<"\n";


    

    return 0;
} 