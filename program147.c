#include<stdio.h>
#include<stdbool.h>
 
bool CheckCapital(char ch)
{
    if((ch > 'A' ) && (ch <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter Charcter ");
    scanf("%c",&cValue);

    bRet = CheckCapital(cValue);
    if(bRet == true)
    {
        printf("%c is capital ");
    }
    else
    {
        printf("%c is not capital ");
    }
    printf(" %c ",cValue);

    return 0;
}