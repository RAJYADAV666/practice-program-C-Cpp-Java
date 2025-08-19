#include<iostream>
using namespace std;

class Number
{


    private:
            int iNo;

    public:
            Number(int X)
            {
                iNo=X;
            }   

            // Logic ;     

};
int main()
{
        int iValue=0;
        int iRet=0;

        cout<<"Enter the Number:"<<endl;
        cin>>iValue;

        Number nobj(iValue);

        cout<<" Factorial is "<<iRet<<endl;





    return 0;
}