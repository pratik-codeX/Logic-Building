#include<stdio.h>

int StrLenX(char * str)
{
    int iCount = 0;

   while(*str != '\0')
   {
    str++;
    iCount++;
   }
   return iCount;
}

int main()
{
    char Arr[50];
    int iRet = 0;
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);
    
    iRet = StrLenX(Arr);
    printf("number of characters are %d \n",iRet);
    return 0;
}