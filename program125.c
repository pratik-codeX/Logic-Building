#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter the number of elemets :");
    scanf("%d",&iLength);

    // Step 1 : Allocate the memory 
    ptr = (int *)malloc(iLength * (sizeof(int)));
    if(ptr == NULL)
    {
        printf("Unble to allocate memoty \n");
        
        return -1;
    }


    printf("Enter the Elements : \n");
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Entered elements are \n");
   
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
       printf("%d\n",ptr[iCnt]);
    }

    // Step 2 : Use the memory 
    // Use 

    // Step 3 : Free the memory 
    free(ptr);
  
    return 0;
}