//accept 
#include<iostream>  //problem on n numbers
using namespace std;
 
template <class T>
T Maximum(T *Arr,int iSize)     
{
    int iCnt = 0;
    T iMax = 0;
    iMax = Arr[0];
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] > i
            Max)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0,iRet = 0;

    cout<<"Enter Number Elements : \n";
    cin>>iLength;

    ptr = new int[iLength];

    cout<<"Enter the Elements : \n";
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        cin>>ptr[iCnt];     //treated as array 
    }

    cout<<"Elements of arrays are : \n";
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        cout<<ptr[iCnt]<<"\n";   
    }

    iRet = Maximum(ptr,iLength);

    cout<<"Maximum Element is :"<<iRet<<'\n';

    delete []ptr;       //if we took only ptr without [], then it will cause memory leak;

    return 0;
}