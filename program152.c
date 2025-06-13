#include<stdio.h>


int main()
{
    char Arr[50];
    printf("Enter your name : \n");
    scanf("%[^'\n']s",Arr);

    printf("Your name is : %s",Arr);

    return 0;
}