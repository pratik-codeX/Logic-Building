//  Input : 4   4
/*
  

*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int j = 0;
    int i = 0;

    for(i=1;i<=iRow;i++)
    {

    for(j = 1;j<=iCol;j++)
    {
        if((iCol % 2)==0)
        printf("%d \t",j);
    }
    printf("\n");

}
}
int main()
{
    int iValue1 =0, iValue2=0;

    printf("Enter the number 0f row :\n");
    scanf("%d",&iValue1);

    printf("Enter the number 0f column :\n");
    scanf("%d",&iValue2);
    
    Display(iValue1,iValue2);


    return 0;
}

// Time Complexity O(N)
//N is a natural number
// Where N >= 0 and N <= Infinity