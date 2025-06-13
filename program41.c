#include<stdio.h>
#include<stdbool.h>

bool Checkperfect(int iNo)
{
    int iSum = 0;
    int iCnt = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt=1;iCnt <=(iNo / 2);iCnt++)
    {
        if((iNo % iCnt)==0);
        {
            iSum = iSum + iCnt;
        }
    }

    if(iNo == iSum)
    {
        
    }
}

int main()
{
    int iValue = 0;
    int bRet = false;
    printf("Enter the number :\n");
    scanf("%d",&iValue);

   bRet= PerfectNum(iValue);
    if(bRet == true);
    {
        printf("%d is perfeact number")
    }
    return 0;
}