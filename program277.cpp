#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo,UINT iPos)
{
   UINT iMask = 1;
   UINT iResult = 0;


    iMask = iMask<<(iPos - 1);
   iResult = iNo & iMask;
   return (iResult == iMask);
}
int main()
{
    UINT iValue = 0,iLocation = 0;
    bool bRet = false;

    cout<<"Enter number : \n";
    cin>>iValue;

    cout<<"Enter Position : \n";
    cin>>iLocation;


    bRet = CheckBit(iValue,iLocation);

    if(bRet == true)
    {
        cout<<"Bit is ON at Location "<<iLocation<<"\n";
    }
    else
    {
         cout<<"Bit is OFF at Location "<<iLocation<<"\n";
    }

    return 0;
}