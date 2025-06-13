#include<stdio.h>
#include<stdbool.h>

bool CheckCharacter(char *str,char ch)
{   
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch )
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;

}

int main()
{
    char Arr[50]={'\0'};
    char cValue = '\0';
    int iRet = false;

    printf("Enter the string :");
    scanf(" %[^'\n']s",Arr);

    
    printf("Enter character :");
    scanf(" %c",&cValue);

    iRet=CheckCharacter(Arr,cValue);

    if(iRet == true)
    {
        printf("%c is present in %s\n",cValue,Arr);
    }
    else
    {
    printf(" %c occurs %d times \n",cValue,iRet);
    }
    return 0;
}