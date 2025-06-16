#include<iostream> 
using namespace std;
 
class ArrayX
{
    public:
        int *Arr;   
        int iSize;

        ArrayX(int iLength = 5)
        {   
            cout<<"Inside Constructor \n ";
            
            iSize = iLength;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {   
            cout<<"Inside Destructor \n";
            delete []Arr;
        }
};

int main()
{

    ArrayX aobj1;
    ArrayX aobj2(10);

    return 0;
}