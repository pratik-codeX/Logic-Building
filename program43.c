#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt =2;iCnt <= (iNo/2);iCnt++)
    {
        if((iNo % iCnt) == 0)
        
     {
            break;
     }
    }
    return (iCnt>(iNo/2));
    // if(iCnt>(iNo/2))
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }

}

int main()
{
    int iValue = 0;
    int bRet = false;
    printf("Enter the number :\n");
    scanf("%d",&iValue);

   bRet= CheckPrime(iValue);
    if(bRet == true);
    {
        printf("%d is prime number");
    }
    return 0;
}