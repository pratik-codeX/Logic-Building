#include<stdio.h>

int StrlenX(char *str)
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
    char Arr[50]= {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Your name is : %s \n",Arr);

    iRet = StrlenX(Arr);

    printf("Number of characters are : %d", iRet);

    return 0;
}

