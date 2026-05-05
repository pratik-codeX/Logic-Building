#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

typedef int * IPTR;
typedef int ** IPPTR;


int Maximum(IPPTR Arr,int iRow,int iCol)
{
    int iMax = 0, i = 0, j= 0;

    iMax = INT_MIN;

    for(i = 0 ;i < iRow ; i++)
    {
        for(j = 0;j < iCol; j++)
        {
           if(Arr[i][j] > iMax)
           {
                iMax = Arr[i][j];
           }
        }
    }
    return iMax;
}


void Accept(IPPTR Arr,int iRow,int iCol)
{

    int i = 0,j = 0;

    printf("Enter the elements : \n");
    for(i = 0 ;i < iRow ; i++)
    {
        for(j = 0;j < iCol; j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }
}

void Display(IPPTR Arr,int iRow,int iCol)
{
    int i = 0, j = 0;

    printf("Elements of matrix are : \n");
    
    for(i = 0 ;i < iRow ; i++)
    {
        for(j = 0;j < iCol; j++)
        {
            printf("%d \t",Arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int iRow = 0, iCol = 0 , i = 0, j = 0 , iRet = 0;
    IPPTR Arr= NULL;

    printf("Enter number of rows\n");
    scanf("%d",&iRow);

    printf("Enter number of columns\n");
    scanf("%d",&iCol);

    Arr = (IPPTR)malloc(sizeof(IPTR) * iRow);

    for(i = 0;i < iRow ; i++)
    {
        Arr[i] = (IPTR)malloc(sizeof(int) * iCol);
    }

    Accept(Arr,iRow,iCol);

    Display(Arr,iRow,iCol);

    iRet = Maximum(Arr,iRow,iCol);

    printf("The Maximum of Matix is : %d\n",iRet);

    printf("the smallest number is : %d",INT_MIN);
    
    //Deallocate memory of matrix

    for(i = 0;i<iRow;i++)
    {
        free(Arr[i]);
    }

    free(Arr);

    return 0;
}