#include<stdbool.h>
#include<stdio.h>

bool CheckPrime(iNo)

{
    int iCnt=0;
    bool bFlag = true ;

    if( iNo < 0 )
    {
        iNo = -iNo;  //Updator
    }

    for(iCnt = 2;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo)
    }
    return bFlag;
}
 
int main()
{   
    int iValue =0;
    int bRet =false;
    printf("enter number : \n");
    scanf("%d",&iValue);

    
    bRet=CheckPrime(iValue);
    if(bRet == true)
    {
    printf("%d is perfect number \n",bRet);
    }
    else
    {
        printf("this is not perfect number ");
    }
    return 0;
}