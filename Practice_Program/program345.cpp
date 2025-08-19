#include<iostream>
using namespace std;


int main()
{
    int iSize=0;
    int i=0;

    int *ptr=NULL;

    //step:1

    cout<<"Enter the number of Element :"<<"\n";
    cin>>iSize;

    ptr=new int [iSize];
    
    cout<<"Enter the elements:"<<"\n";

    for(i=0;i<iSize;i++)
    {
        
        cin>>ptr[i];

    }

    cout<<"Elements of the Array Are"<<"\n";

    for(i=0;i<iSize;i++)
    {
        cout<<ptr[i]<<"\t";
    }

    cout<<"\n";

    delete []ptr;

    return 0;
}
