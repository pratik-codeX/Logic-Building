#include<stdio.h>

int main()
{
    char Arr[50]={'\0'};
    char cValue = '\0';

    printf("Enter the string :");
    scanf("%[^'\n]s",Arr);

    //problem due to buffer cleanup
    printf("Enter character :");
    scanf("%c",cValue);


    return 0;
}