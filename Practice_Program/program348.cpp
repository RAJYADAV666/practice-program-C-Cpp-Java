#include<iostream>
using namespace std;

template<class T>
 T Addition(T *Arr, int  Length)
{
    T Sum=0;
    int  i=0; 


    for(i=0;i<Length;i++)
    {
        Sum=Sum+Arr[i];
    }
    return Sum;


}

int main()
{
    int iSize=0;
    int i=0;
    float fRet=0;


    float *ptr=NULL;

    //step:1

    cout<<"Enter the number of Element :"<<"\n";
    cin>>iSize;

     ptr=new float [iSize];
    
    cout<<"Enter the elements:"<<"\n";

    for(i=0;i<iSize;i++)
    {
        
        cin>>ptr[i];

    }

    fRet=Addition(ptr,iSize);

    cout<<"Addition of All elments Are :"<<fRet<<"\n";

    cout<<"Elements of the Array Are"<<"\n";

   

    delete []ptr;

    return 0;
}
