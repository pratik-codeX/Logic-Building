// Input : 4
// Output : 
/*
4
3
2
1
*/
/*  
    Start 
        Accept the frequency 
        Iterate from 1 to that frequency
            Display * on screen
        continue 
    Stop
*/


#include<stdio.h>

void Display(int iNo)
{
    int iCnt =0;

    if(iNo < 0)
    {
        iNo = -iNo; //Updator
    }
    for(iCnt = iNo; iCnt >= 0 ;iCnt--)
    {
        printf("%d\n",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the Frequency :\n");  
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}

// Time Complexity O(N)
//N is a natural number
// Where N >= 0 and N <= Infinity