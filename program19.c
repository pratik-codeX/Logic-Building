//check whether number is even or odd
#include<stdio.h>
#include<stdbool.h>     //if question is check whether


    bool CheckEven(int iNo)
    {

        if((iNo % 2) ==0)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
int main()
{
    int iValue=0;
    bool bRet = false;

    printf("Enter the number : /n");
    scanf("%d",&iValue);

    bRet= CheckEven(iValue);

    if(bRet==true)
    {
        printf("%d the number is even",iValue);
    }
    else
    {
        printf("%d the number is odd",iValue);
    }
    return 0;
}