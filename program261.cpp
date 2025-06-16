#include<iostream>      //kuthlahi program runtime la generic rahat nahi to specific madhe hoto
using namespace std;

template <class T>
int Addition(T Arr[],int iLength)
{
    int iCnt = 0;
    T Sum = 0;

    for(iCnt = 0;iCnt < iLength ;iCnt++)
    {
        cin>>Arr[iCnt];
    }

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        Sum = Arr[iCnt] + Sum;
        
    }
    return Sum;
}

int main()
{   
    int Size ,iCnt = 0,iRet = 0;
    float *p = NULL;
   
    cout<<"Enter Number of elements you want to store "<<"\n";
    cin>>Size;

    float *ptr = new float[Size];
    //Use

    cout<<"Enter the Elements"<<"\n";


    iRet = Addition(ptr,Size);
    cout<<"Addition of Elements is : "<<iRet;

    delete []ptr;
    return 0;
}