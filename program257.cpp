#include<iostream>     
using namespace std;

int main()
{   
    int Size ,iCnt = 0;
    int *p = NULL;

    cout<<"Enter Number of elements you want to store "<<"\n";
    cin>>Size;

    int *ptr = new int[Size];
    //Use

    cout<<"Enter the Elements"<<"\n";

    for(iCnt = 0;iCnt < Size ;iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"Elements of the array are :"<<"\n";
    for(iCnt = 0;iCnt < Size ;iCnt++)
    {
        cout<<ptr[iCnt]<<"\n";
    }

    delete []ptr;
    return 0;
}