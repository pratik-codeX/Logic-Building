#include<stdio.h>
#include<stdbool.h>
 
bool CheckCapital(char ch)
{
    if(ch > 65)
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
        printf("%c is capital \n");
    }
    else
    {
        printf("%c is not capital ");
    }
    printf("ASCII value of ",bRet);

    return 0;
}