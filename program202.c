#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(char *str)
{
   char *start = NULL;
   char *end = NULL;
    bool bFlag = true;

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    while(start <end)
    {
        if(start == end)
        {
            return false;
        }
    
    }
    return bFlag;
   
}

int main()
{
    char Arr[50]={'\0'};
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the string :");
    scanf(" %[^'\n']s",Arr);

   bRet = CheckPallindrome(Arr);

   if(bRet == true)
   {
    printf("String is pallingrom");
   }
   else
   {
    printf("String is no pallindrome\n");
   }
    
    return 0;
}