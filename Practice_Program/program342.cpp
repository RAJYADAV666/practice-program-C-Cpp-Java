#include<iostream>
using namespace std;
class Arithmatic
{

 public:
        int No1;
        int No2;
               
        Arithmatic(int A,int B);

        int Addition();
        int Subtraction();


};

 Arithmatic::Arithmatic(int A,int B)
{
    this->No1=A; 
    this->No2=B;

}
int  Arithmatic::Addition()
{
    int Ans=0;
    Ans=No1+No2;

    return Ans;
}
int Arithmatic::Subtraction()
{
    int Ans=0;
    Ans=No1-No2;

    return Ans;
}
int main()
{

    
    Arithmatic aobj(12,14);

    int Ret=0;

    Ret=aobj.Addition() ;
    cout<<"Addition is :"<<Ret<<"\n";

     Ret=aobj.Subtraction();
    cout<<"Subtraction  is :"<<Ret<<"\n";

    
    return 0;
}