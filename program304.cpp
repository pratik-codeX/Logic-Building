#include<iostream> 
using namespace std;
 
class ArrayX
{
    public:
        int *Arr;   
        int iSize;

        ArrayX(int iLength)
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

    ArrayX aobj(5);

    return 0;
}