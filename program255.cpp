#include<iostream>     
using namespace std;




int main()
{   
    int Size ;
    int *p = NULL;

    cout<<"Enter Number of elements you want to store "<<"\n";
    cin>>Size;

    int *ptr = new int[Size];
    //Use

    delete []ptr;
    return 0;
}