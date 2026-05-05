#include<stdio.h>

/*  input = 9875
    output = 9+8+7+5 =  29
         2 + 9   
*/
int GenericRoot(int iNo)
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

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = GenericRoot(iValue);    //DigitalRoot;

    printf("Generic root of %d is : %d \n :" , iValue , iRet);

    return 0;
}

/*
accept number and calculate its generic root

input = 9875
output = 9+8+7+5 = 29 -> 2+9 -> 11 -> 1+1 = 2

input = 21
output = 2+1 = 3

input = 7
output = 7


*/