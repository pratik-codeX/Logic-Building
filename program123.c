#include<stdio.h>

int Summmetion(int ptr[], int iSize)
{
    int iCnt = 0, iSum = 0;
   
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
    iSum = iSum + ptr[iCnt];
    }
    return iSum;
}

int main()
{

    int Arr[5];
    int iCnt = 0;
    int iRet = 0;

    printf("enter the elements :\n");
    
    for(iCnt = 0; iCnt < 5;iCnt++)
    {
    scanf("%d",&Arr[iCnt]);
    }

   iRet = Summmetion(Arr,5); // Display(100,5);

   printf("Addiiton is : %d \n", iRet );
  
    return 0;
}