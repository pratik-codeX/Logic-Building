#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt =2;iCnt <= (iNo/2);iCnt++);
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;
        }
    }

    return bFlag;
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