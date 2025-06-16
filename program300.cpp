//accept 
#include<iostream>  //problem on n numbers
using namespace std;
 
int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0;

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





    return 0;
}