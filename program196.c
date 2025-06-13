#include<stdio.h>
#include<stdbool.h>
void ReverseDisplay(char *str)
{
    int iCount = 0, iCnt = 0;

    while(*str != '\0')
    {
        
        iCount++;
        str++;

    }
     str--;
     for(iCnt = iCount;iCnt > 0;iCnt--,str--)
     {
        printf("%c",*str);
     }
     printf("\n");
}

int main()
{
    char Arr[50]={'\0'};
    char cValue = '\0';
    int iRet = false;

    printf("Enter the string :");
    scanf(" %[^'\n']s",Arr);

    ReverseDisplay(Arr);
    


    return 0;
}