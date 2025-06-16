#include<iostream>      //kuthlahi program runtime la generic rahat nahi to specific madhe hoto
using namespace std;

template <class T>
void Display(T Arr[],int iLength)
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
    float *p = NULL;
   
    cout<<"Enter Number of elements you want to store "<<"\n";
    cin>>Size;

    float *ptr = new float[Size];
    //Use

    cout<<"Enter the Elements"<<"\n";


    Display(ptr,Size);

    delete []ptr;
    return 0;
}