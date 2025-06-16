#include<iostream> 
using namespace std;
 
class ArrayX
{
    private:    
        float *Arr;   
        int iSize;

    public:
        ArrayX(int iLength = 5)
        {   
            cout<<"Inside Constructor \n ";
            iSize = iLength;
            Arr = new float[iSize];
        }

        ~ArrayX()
        {   
            cout<<"Inside Destructor \n";
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter the Element \n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize ; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

          void Display()
        {
            cout<<"Elements of the array are : \n";
            int iCnt = 0;

            for(iCnt = 0;iCnt < iSize ; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }

        float Maximum()
        {
        int iCnt = 0;
        float iMax = 0.0f;
        iMax = Arr[0];
        for(iCnt = 0;iCnt < iSize;iCnt++)
        {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        }
        return iMax;
        }
};

int main()
{
    ArrayX aobj(5);

    // aobj.Arr = NULL;
    aobj.Accept();
    aobj.Display();
    float iRet = 0;
    iRet = aobj.Maximum();

    cout<<"Maximum is :"<<iRet<<"\n";
    return 0;
}