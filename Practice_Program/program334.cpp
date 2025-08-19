#include<iostream>
using namespace std;
 // call by Value 
void Swap(int No1,int No2)
{
    int Temp;

    Temp=No1;
    No1=No2;
    No2=Temp;


}


int main()
{
    int ivalue1=10;
    int ivalue2=20;

    cout<<"Value of iValue1"<<ivalue1<<"\n";
    cout<<"Value of iValue2"<<ivalue2<<"\n";

    Swap(ivalue1,ivalue2);

    cout<<"Value of iValue1"<<ivalue1<<"\n";
    cout<<"Value of iValue2"<<ivalue2<<"\n";



    return 0;
}