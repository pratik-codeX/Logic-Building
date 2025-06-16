#include<iostream>
using namespace std;

// 12     16    11
int Maximum(int iValue1,int iValue2,int iValue3)
{   
    if((iValue1 > iValue2 )  && (iValue1  > iValue3))
    {
        return iValue1;
    }
    else if((iValue2 > iValue1)  && (iValue2  > iValue3))
    {
        return iValue2;
    }
    else
    {
        return iValue3;
    }


}
int main()
{
    int iNo1 = 0, iNo2 = 0, iNo3 = 0,iRet = 0;

    cout<<"Enter First Number : "<<"\n";
    cin>>iNo1;

      cout<<"Enter Second Number : "<<"\n";
    cin>>iNo2;

      cout<<"Enter Third Number : "<<"\n";
    cin>>iNo3;

    iRet = Maximum(iNo1,iNo2,iNo3);

    cout<<"The Larges Number is "<<iRet;

    

    return 0;
}