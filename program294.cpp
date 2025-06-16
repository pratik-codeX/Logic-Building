#include<iostream>
using namespace std;

template <class T>
T Addition(T No1,T No2)
{
    T Ans = 0
    .0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int a = 10,b = 11,Ret = 0;
    Ret = Addition(a,b);
    cout<<"Addition of Numbers is : "<<Ret<<"\n";

     int x = 10.70,y = 11.90,Ret2 = 0.0;
    Ret2 = Addition(x,y);
    cout<<"Addition of Numbers is : "<<Ret2<<"\n";


    return 0;
}