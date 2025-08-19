#include<iostream>
using namespace std;

class Array
{
        Private:
              
            int Arr[];             //int arr[]
            int iSize;

        Public:
                    Array(int X)
                    {

                        iSize=x;
                        Arr=new int[iSize];
                    }
                    ~Array()
                    {
                        delete[]Arr;
                    }





};


int main()
{


    return 0;
}