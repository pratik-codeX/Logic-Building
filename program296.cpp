#include<iostream>
using namespace std;
//call by address  
void Swap(int *No1,int *No2)        //mali la sangilelya thikani jaun ghaas kapyal sangitla

{
    int temp = 0;


    temp = *No1;
    *No1 = *No2;
    *No2 = temp;
}

int main()
{
    int a = 10, b = 11;
    
    
    Swap(&a,&b);

    cout<<"Value of a :"<<a<<"\n";
    cout<<"Value of b :"<<b<<"\n";
    return 0;
}