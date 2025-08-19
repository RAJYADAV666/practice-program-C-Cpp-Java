#include<iostream>
using namespace std;
 
void Swap(  float &No1,  float &No2)
{
     float Temp;

    Temp=No1;
    No1=No2;
    No2=Temp;


}


int main()
{
    float  fvalue1=10.33;
      float fvalue2=20.23;

    cout<<"Value of iValue1 "<<fvalue1<<"\n";
    cout<<"Value of iValue2 "<<fvalue2<<"\n";

    Swap(fvalue1,fvalue2);

    cout<<"Value of iValue1 "<<fvalue1<<"\n";
    cout<<"Value of iValue2 "<<fvalue2<<"\n";



    return 0;
}