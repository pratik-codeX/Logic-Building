#include<stdio.h>
//Homw work
//Case Sensitive
int CharFrequency(char *str,char ch)
{
    int iCount =0;

    while(*str != '\0')
    {
        if(ch >= 'A' && ch <= 'Z')
        {
            if(*str == ch || *str == ch + 32)
            {
                iCount++;
            }
        }
        else if(ch >= 'a' && ch <= 'z')
        {
            if(*str == ch || *str == ch - 32)
            {
                iCount++;
            }
        }
     str++;
    }
    return iCount;
}
int main()
{
    char Arr[50]={'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string :");
    scanf(" %[^'\n']s",Arr);

    
    printf("Enter character :");
    scanf(" %c",cValue);

    iRet=CharFrequency(Arr,cValue);

    printf(" %c occurs %d times \n",cValue,iRet);

    return 0;
}