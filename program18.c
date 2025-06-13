#include<stdio.h>
int Calculate(iNo)
{
    int iCnt = 0, iSum = 0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iSum = iSum + iCnt;
    }
    print("the sum of integer is"); 
}
int main()

{
    int iNo = 0;
    printf("enter the value : ");
    scanf("%d",&iNo);
    Calculate();
    return 0;
} 