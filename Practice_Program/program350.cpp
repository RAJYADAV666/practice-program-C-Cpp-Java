#include<iostream>
using namespace std;

class Array
{
    public:
      int Size;
      int *Arr;

    Array(int Length);
    ~Array();
    void Accept();
   
    void Display();
      

};

Array:: Array(int Length)
    {
        Size=Length;
        Arr=new int[Size];
    }

 Array::~Array()
    {
        delete[]Arr;

    }
  void Array:: Accept()
    {
        cout<<" Enter the Elements:"<<"\n";
        int iCnt=0;

        for(iCnt=0;iCnt<Size;iCnt++)
        {
            cin>>Arr[iCnt];
        }

    } 
    void Array::Display()
    {
         cout<<" Elments of the Array Are:"<<"\n";
        int iCnt=0;

        for(iCnt=0;iCnt<Size;iCnt++)
        {
            cout<<Arr[iCnt]<<"\n";
        }
            cout<<"\n";

    }
       


int main()
{
   Array obj(5);
   obj.Accept();
   obj.Display();



    return 0;
}