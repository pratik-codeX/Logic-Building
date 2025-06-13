#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0  )
    {
        iDigit = iNo % 10;
        if((iDigit % 2)==0)
        {
          iNo = iNo /10 ;  
        }
        iCnt++;

    }
    return iCnt;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number :\n");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);
    
    printf("number of digit is : %d \n",iRet);
    
    return 0;
}