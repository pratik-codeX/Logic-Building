#include<stdio.h>
#define ERR_INVALID -1
  


int Factorial(unsigned int iNo)
{

        int iCnt=0 , iFact = 1;
        if(iNo < 0)
        {
            return ERR_INVALID;
        }
        
        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            iFact = iFact * iCnt;
        }
    return iFact;
    }
int main()
{
    unsigned int iValue=0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%u",&iValue);

    iRet = Factorial(iValue);
    if(iRet == ERR_INVALID)
    {
        printf("Invalid error");
    }
    else{

    
    printf(" factorial is :%d",iRet);
    }
   
    return 0;
}