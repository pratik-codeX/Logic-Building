#include<stdbool.h>
#include<stdio.h>

bool CheckPerfect(int iNo)

{
    int iCnt=0;
    int iSum = 0;

    if( iNo < 0 )
    {
        iNo = -iNo;  //Updator
    }

    for(iCnt = 1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo % iCnt == 0))
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}
 
int main()
{   
    int iValue =0;
    int bRet =false; 

    printf("enter number : \n");
    scanf("%d",&iValue);

    
    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
    printf("%d is perfect number \n",iValue);
    }
    else
    {
        printf(" %d is not perfect number",bRet);
    }
    return 0;
}