#include<iostream>
using namespace std;
 
 template <class T>
void  Swap(  T &No1, T &No2)
{
     T Temp;

    Temp=No1;
    No1=No2;
    No2=Temp;


}


int main()
{
      double dvalue1=10.33;
      double dvalue2=20.23;

      int  ivalue1=10;
      int  ivalue2=20;

      float fvalue1=98.22;
      float fvalue2=45.23;

    cout<<"Value of iValue1 "<<dvalue1<<"\n";
    cout<<"Value of iValue2 "<<dvalue2<<"\n";

    Swap(dvalue1,dvalue2);

    cout<<"Value of iValue1 "<<dvalue1<<"\n";
    cout<<"Value of iValue2 "<<dvalue2<<"\n";


    cout<<"Value of iValue1 "<<ivalue1<<"\n";
    cout<<"Value of iValue2 "<<ivalue2<<"\n";

    Swap(ivalue1,ivalue2);

    cout<<"Value of iValue1 "<<ivalue1<<"\n";
    cout<<"Value of iValue2 "<<ivalue2<<"\n";



    cout<<"Value of iValue1 "<<fvalue1<<"\n";
    cout<<"Value of iValue2 "<<fvalue2<<"\n";

    Swap(fvalue1,fvalue2);

    cout<<"Value of iValue1 "<<fvalue1<<"\n";
    cout<<"Value of iValue2 "<<fvalue2<<"\n";




    return 0;
}