#include<iostream>
using namespace std;

template<class T>
class Arithmatic
{

 public:
        T No1;
        T No2;
               
        Arithmatic(T A,T B);

        T Addition();
        T Subtraction();


};
template<class T>
 Arithmatic<T>::Arithmatic(T A,T B)
{
    this->No1=A; 
    this->No2=B;

}
template<class T>
T  Arithmatic<T>::Addition()
{
    T Ans=0;
    Ans=No1+No2;

    return Ans;
}
template<class T>
T Arithmatic<T>::Subtraction()
{
    T Ans=0;
    Ans=No1-No2;

    return Ans;
}
int main()
{

    
    Arithmatic <int>aobj(12,14);
    int Ret=0;

    Ret=aobj.Addition() ;
    cout<<"Addition is :"<<Ret<<"\n";

     Ret=aobj.Subtraction();
    cout<<"Subtraction  is :"<<Ret<<"\n";

     Arithmatic <float>aobj1(11.8,10.9); 
     // class la sangav lagat konta datatype ahe mhnun

    float fRet=0;

    fRet=aobj1.Addition() ;
    cout<<"Addition is :"<<fRet<<"\n";

     fRet=aobj1.Subtraction();
    cout<<"Subtraction  is :"<<fRet<<"\n";

    
    return 0;
}