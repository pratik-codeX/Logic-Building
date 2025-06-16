#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ChangeBit(UINT iNo)
{
    UINT iMask = 4294965247;
    UINT iResult = 0;

    iResult = iNo & iMask;

    return iResult;

}  
int main()
{
    UINT iValue = 0,iRet = 0;
   

    cout<<"Enter number : \n";
    cin>>iValue;

   iRet =  ChangeBit(iValue);

  cout<<"Updated Number is : "<<iRet;
    return 0;
}