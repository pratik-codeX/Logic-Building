#include<stdio.h>

int Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("%d \n" ,iCnt);
    
      
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the value : ");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}