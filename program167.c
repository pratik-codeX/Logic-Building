#include<stdio.h>
#include<string.h>      // linker gives obj file that contains logic in it and header have only prototype


int main()
{   
    char Arr[50]= {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Your name is : %s \n",Arr);

    iRet = strlen(Arr);

    printf("Number of characters are : %d", iRet);

    return 0;
}

