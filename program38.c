#include<stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;


    if( iNo < 0 )
    {
        iNo = -iNo;  //Updator
    }
    
     for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo % iCnt == 0) 
        {
            iSum = iSum + iCnt ;  
        }
    }
    return iSum;
}
int main()
{   
    int iValue = 0;
    int iRet = 0;
    printf("enter number : \n");
    scanf("%d",&iValue);

    
    iRet=SumFactors(iValue);
    printf("sum of factors are : %d\n",iRet);
    
    return 0;
}