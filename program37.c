#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;

    if( iNo < 0 )
    {
        iNo = -iNo;  //Updator
    }
    
     for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo % iCnt ==0) && (iCnt % 2 == 0))
        {
            printf("Even not Factor is %d\n",iCnt);
        } 
    }
}
int main()
{   
    int iValue =0 ;
    printf("enter number :");
    scanf("%d",&iValue);

    
    DisplayEvenFactors(iValue);
    
    return 0;
}