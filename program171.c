#include<stdio.h>

int CountSmall(char *str)
{
    int iCount = 0;
   while(*str != '\0')
   {
    if((*str >= 'a') && (*str <= 'z') )
    
    {
        iCount++;
    }
    str++;
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

    iRet = CountSmall(Arr);

    printf("Number of Capital characters are : %d", iRet);

    return 0;
}

