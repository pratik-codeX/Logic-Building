#include<iostream>     
using namespace std;

void Display(int Arr[],int iLength)
{
    int iCnt = 0;

    for(iCnt = 0;iCnt < iLength ;iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"Elements of the array are :"<<"\n";
    for(iCnt = 0;iCnt < iLength ;iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }

}

int main()
{   
    int Size ,iCnt = 0;
    int *p = NULL;

    cout<<"Enter Number of elements you want to store "<<"\n";
    cin>>Size;

    int *ptr = new int[Size];
    //Use

    cout<<"Enter the Elements"<<"\n";


    Display(ptr,Size);

    delete []ptr;
    return 0;
}