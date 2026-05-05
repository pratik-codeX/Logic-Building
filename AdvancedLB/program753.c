#include<stdio.h>
#include<stdbool.h>

/*  input : 19
    output = 19 -> 1 + 9 -> 10 -> 1 + 0 = 1
            true
            
*/
int CheckMagic(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    if(iNo < 0)     //Updator
    {
        iNo = -iNo;
    }

    iSum = iNo;

    while(iSum > 9)
    {
        iNo = iSum;

        iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
    }

    return (iSum == 1);
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    bRet = CheckMagic(iValue);

    if(bRet)
    {
        printf("%d is Magic number \n",iValue);
    }
    else
    {
        printf("%d is not Magic number\n",iValue);
    }
    return 0;
}
