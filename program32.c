#include<stdio.h>
#define ERR_INVALID -1
  

unsigned long Factorial(unsigned int iNo)
{

        int iCnt=0 , iFact = 1;
        if(iNo < 0)
        {
            return ERR_INVALID;
        }
        iCnt=1;
        while(iCnt>=1)
        {
            iFact = iFact * iCnt;
            iCnt--;
        }
    return iFact;
}
int main()
{
    unsigned int iValue=0;
    unsigned long iRet = 0;

    printf("Enter the number : \n");
    scanf("%u",&iValue);

    iRet = Factorial(iValue);
    if(iRet == ERR_INVALID)
    {
        printf("Invalid error");
    }
    else
    {
    printf(" factorial is :%lu\n",iRet);
    }
   
    return 0;
}