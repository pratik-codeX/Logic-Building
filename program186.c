#include<stdio.h>
//Case Sensitive
int CharFrequency(char str[] , char ch)
{
    int iCount =0;
    while(*str != '\0')
    {
        if((*str == ch) ||(*str == ch + 32))
        {
            iCount++;
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
    scanf("%[^'\n]s",Arr);

    
    printf("Enter character :");
    scanf(" %c",cValue);

    iRet = CharFrequency(Arr,cValue);

    printf(" occurs %d times \n",iRet);

    
    return 0;
}