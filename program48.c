#include<stdio.h>

int CountDigits(int iNo)
{
   
    int iCnt = 0;

    while(iNo != 0 )
    {
        
        iNo = iNo /10 ;
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

    iRet = CountDigits(iValue);
    
    printf("number of digit is : %d \n",iRet);
    
    return 0;
}