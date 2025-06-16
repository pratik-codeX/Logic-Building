#include<iostream>
using namespace std;

int CountOne(int iNo)
{
   int iDigit = 0,iCount = 0;

   while(iNo != 0)
   {
        iDigit = iNo % 2;
        iCount = iCount + iDigit;
        iNo = iNo / 2; 
   }
   return iCount;
}
int main()
{

    int iValue = 0,iRet = 0;

    cout<<"Enter Number : \n";
    cin>>iValue;

   iRet = CountOne(iValue);
   cout<<"Number of 1's "<<iRet;

    return 0;
}