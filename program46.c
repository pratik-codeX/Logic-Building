#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("the digits are %d \n",iDigit);
        iNo = iNo /10 ;
    }
}
int main()
{
    int iValue = 0;

    printf("enter number :\n");
    scanf("%d",&iValue);
    
    DisplayDigit(iValue);
    
    return 0;
}