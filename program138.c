#include<stdio.h>
#include<stdlib.h>



int Frequency(int Arr[],int iSize , int iNo)
{
    int iCnt = 0, iCount = 0;
   


    if(Arr == NULL || iSize <= 0)
    {
        return -1;
    }
    for(iCnt =0; iCnt < iSize ;iCnt++)
    {
        if(Arr[iCnt] ==iNo)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int *iPtr = NULL;
    int iLength = 0, iValue = 0 , iCnt = 0;
    int iRet = 0;

    printf("Enter number of elements :");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * (sizeof(int)));
    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory \n");
        return -1;
    }

    printf("Enter the elements \n");
    for(iCnt = 0;iCnt < iLength ; iCnt++)
    {   
        printf("Enter the number %d\n", iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    printf("\nEnter the value that you want to search :\n");
    scanf("%d",&iValue);

    iRet = Frequency(iPtr,iLength,iValue);
    if(iRet == -1)
    {
        printf("there is issue in input \n",iValue);
    }
    else
    {
        printf("%d appars %d  times ",iValue,iRet);
    }

    return 0;
}