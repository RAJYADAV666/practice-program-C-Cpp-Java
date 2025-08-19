#include<iostream>
using namespace std;
 
void Swap(  double &No1, double &No2)
{
     double Temp;

    Temp=No1;
    No1=No2;
    No2=Temp;


}


int main()
{
   double dvalue1=10.33;
      double dvalue2=20.23;

    cout<<"Value of iValue1"<<dvalue1<<"\n";
    cout<<"Value of iValue2"<<dvalue2<<"\n";

    Swap(dvalue1,dvalue2);

    cout<<"Value of iValue1"<<dvalue1<<"\n";
    cout<<"Value of iValue2"<<dvalue2<<"\n";



    return 0;
}