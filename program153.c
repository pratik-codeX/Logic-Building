#include<stdio.h>

void Display(char * str)
{
    printf("your name is :%s",str);
}

int main()
{
    char Arr[50];
    printf("Enter your name : \n");
    scanf("%[^'\n']s",Arr);
    
    Display(Arr);
    return 0;
}