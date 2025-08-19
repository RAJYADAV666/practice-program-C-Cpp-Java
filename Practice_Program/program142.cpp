#include<iostream>
using namespace std;

class Array
{
        Privte :
              
            int *Arr;             //int arr[]
            int iSize;

        Public:
                    Array(int X)
                    {

                        iSize=X;
                        Arr=new int[iSize];
                    }
                    ~Array()
                    {
                        delete[]Arr;
                    }

                    void Accept()  // member function
                    {
                        int iCnt=0;

                        Cout<<"Please Enter the Element:"<<endl;
                        for(iCnt=0;iCnt<iSize;iCnt++)
                        {
                            cin>>Arr[iCnt];
                        }
                    }

                    void Display() // member function 
                    {
                        Cout<<"Element of the Array are:"<<endl;
                        int iCnt=0;
                        for(iCnt=0;iCnt<iSize;iCnt++)
                        {
                            cout<<Arr[iCnt]<<endl;
                        }
                    }


};// End of class


int main()
{

        int iLength=0;

        cout<<"Enter the number of elemet that you want to store :"<<endl;
        cin>>iLength;

        Array *aobj=new Array(iLength);

        aobj->Accept();
        aobj->Display();

    

    return 0;
}