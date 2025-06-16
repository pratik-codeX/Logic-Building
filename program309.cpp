#include<iostream> 
using namespace std;
 
class ArrayX
{
    private:    //Change
        int *Arr;   
        int iSize;

    public:
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

        int Maximum()
        {
        int iCnt = 0,iMax = 0;
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
    int iRet = 0;
    iRet = aobj.Maximum();


    cout<<"Maximum is :"<<iRet<<"\n";
    return 0;
}