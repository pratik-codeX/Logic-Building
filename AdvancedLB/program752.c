#include<stdio.h>
#include<stdbool.h>

/*  input : 18
    output = 18 -> 1 + 8 -> 9
            (18 % 9) == 0
            true
            
*/

bool ChekcNiven(int iNo)
{
    int iSum = 0 ,iTemp = iNo , iDigit = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }

    return (iTemp % iSum == 0);
}   
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    bRet = ChekcNiven(iValue);

    if(bRet)
    {
        printf("%d is Niven number \n",iValue);
    }
    else
    {
        printf("%d is not Niven number\n",iValue);
    }
    return 0;
}
