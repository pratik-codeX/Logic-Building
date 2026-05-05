#include<stdio.h>
#include<stdbool.h>

/*  input = 153
    output = 1^3 + 5^3 + 3^3
            1   +  125 + 27
            153
            true

    input : 6743
            6^4 + 7^4 + 4^4 + 3^4

*/

int Power(int A, int B)     //A^B
{
    int Result =1;
    int i = 0;

    for(i =1 ;i <= B;i++)
    {
        Result = Result * A;
    }

    return Result;
}

int iCountDigit(int iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        iNo = iNo / 10;
        iCount++;
    }

    return iCount;
}

bool ChekcArmstrong(int iNo)
{
    int iSum = 0 ,iTemp = iNo;
    int iCount = 0,iDigit = 0;
    
    iCount = iCountDigit(iNo);

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + Power(iDigit,iCount);
        iNo = iNo / 10;
    }

    return (iTemp == iSum);
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    bRet = ChekcArmstrong(iValue);

    if(bRet)
    {
        printf("%d is armstrong number \n",iValue);
    }
    else
    {
        printf("%d is not armstrong number\n",iValue);
    }
    return 0;
}
