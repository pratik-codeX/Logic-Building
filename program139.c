#include<stdio.h>
#include<stdlib.h>



int Maximum(int Arr[],int iSize)
{
    int iCnt = 0, iMax = 0;
   


    if(Arr == NULL || iSize <= 0)
    {
        printf("Invalid Input \n");
    }

    for(iCnt =0; iCnt < iSize ;iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
   return iMax;
}
int main()
{
    int *iPtr = NULL;
    int iLength = 0,  iCnt = 0;
    int iRet = 0 ;

    printf("Enter number of elements :");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * (sizeof(int)));
    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory \n");
        return -1;
    }

    printf("Enter the elements ");
    for(iCnt = 0;iCnt < iLength ; iCnt++)
    {   
        printf("Enter the number %d \t", iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Maximum(iPtr,iLength);
    printf("Largest element is : %d",iRet);

    return 0;
}