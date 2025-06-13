#include<stdio.h>
#include<stdbool.h>

bool CheckCharacter(char *str,char ch)
{   
  

    while(*str != '\0')
    {
        if(*str == ch )
        {
            
            break;
        }
        str++;
    }
   return (*str == ch);
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