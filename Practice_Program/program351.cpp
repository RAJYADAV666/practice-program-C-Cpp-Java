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

    int Addition();
      

};
int Array:: Addition()
{
    int Sum=0;
    int iCnt=0;

    for(iCnt=0;iCnt<Size;iCnt++)
    {
        Sum=Sum+Arr[iCnt];


    }
    return Sum;


}

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

    int iRet=0;

   Array obj(5);
   obj.Accept();
   obj.Display();

   iRet=obj.Addition();
   cout<<"Addition is :"<<iRet<<"\n";



    return 0;
}