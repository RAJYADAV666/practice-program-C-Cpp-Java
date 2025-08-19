#include<iostream>
using namespace std;

template<class T>
class Array
{
    public:
      int Size;
      T *Arr;

    Array(int Length);
    ~Array();
    void Accept();
    void Display();

    T Addition();
      

};
template<class T>
T  Array<T>:: Addition()
{
    T Sum=0;
    int iCnt=0;

    for(iCnt=0;iCnt<Size;iCnt++)
    {
        Sum=Sum+Arr[iCnt];


    }
    return Sum;


}
template<class T>
Array<T>:: Array(int Length)
    {
        Size=Length;
        Arr=new T[Size];
    }
template<class T>
 Array<T>::~Array()
    {
        delete[]Arr;

    }
   template<class T>
  void Array<T>:: Accept()
    {
        cout<<" Enter the Elements:"<<"\n";
        int iCnt=0;

        for(iCnt=0;iCnt<Size;iCnt++)
        {
            cin>>Arr[iCnt];
        }

    } 
    template<class T>
    void Array<T>::Display()
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

   Array<int> obj(5);
   obj.Accept();
   obj.Display();

   iRet=obj.Addition();
   cout<<"Addition is :"<<iRet<<"\n";



    return 0;
}