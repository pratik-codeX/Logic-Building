#include<stdio.h>
#include<stdbool.h>
 
bool CheckSmall(char ch)
{
    if((ch > 'a' ) && (ch <= 'z'))
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

    bRet = CheckSmall(cValue);
    if(bRet == true)
    {
        printf("%c is small ");
    }
    else
    {
        printf("%c is not small ");
    }
    printf(" %c ",cValue);

    return 0;
}