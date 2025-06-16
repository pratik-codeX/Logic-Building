#include<iostream>
using namespace std;

template <class T>
T Maximum(T iValue1,T iValue2,T iValue3)
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
    cout<<Maximum(10,11,12)<<"\n";
   cout<<Maximum(10.11f,11.11f,12.52f)<<"\n";
   cout<<Maximum(10.111,11.1111,12.5266);

  

    

    return 0;
}