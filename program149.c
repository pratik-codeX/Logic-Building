#include<stdio.h>
#include<stdbool.h>
 
bool CheckDigit(char ch)
{
    if((ch > '0' ) && (ch <= '9'))
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

    printf("Enter Digit ");
    scanf("%c",&cValue);

    bRet = CheckDigit(cValue);
    if(bRet == true)
    {
        printf("%c is Digit ",cValue);
    }
    else
    {
        printf("%c is not Digit  ",cValue);
    }
    

    return 0;
}