//check whether number is even or odd
#include<stdio.h>
#include<stdbool.h>     //if question is check whether


    bool CheckDivisible(int iNo)
    {

        if((iNo  % 5) ==0)
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

    bRet= CheckDivisible(iValue);

    if(bRet==true)
    {
        printf("%d the number is divisible by 5 ",iValue);
    }
    else
    {
        printf("%d the number is not divisible by 5",iValue);
    }
    return 0;
}