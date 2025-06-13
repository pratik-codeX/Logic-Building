#include<stdio.h>
#include<stdbool.h>
void ReverseDisplay(char *str)
{
   start = &str;
    

    while()
    {
        
        iCount++;
        str++;

    }
     str--;
     while(str >= iStart)
     {
        printf("%c",*str);
        str--;
     }
     printf("\n");
}

int main()
{
    char Arr[50]={'\0'};
    char cValue = '\0';
    int iRet = false;

    printf("Enter the string :");
    scanf(" %[^'\n']s",Arr);

    ReverseDisplay(Arr);
    


    return 0;
}