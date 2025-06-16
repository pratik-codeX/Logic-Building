#include<iostream>     
using namespace std;

template <class T>              //Template header   class is main datatype      capital T is Template name and it can be change 
T Addition(T No1,T No2)
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{  
    cout<<Addition(10,11)<<"\n";
    cout<<Addition(10.11f,11.12f)<<"\n";
    cout<<Addition(10.14,11.45)<<"\n";


    return 0;
}