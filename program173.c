#include<stdio.h>

void CountCapitalSmall(char *str)
{
    int iCountCap = 0,iCountSmall = 0;
   while(*str != '\0')
   {
    if((*str >= 'a') && (*str <= 'z') )
    {
        iCountSmall++;
    }
    else if((*str >= 'A') && (*str <= 'Z'))
    {
        iCountCap++;
    }
    str++;
   
   }
    printf("Small elements are %d\n",iCountCap);
    printf("Small elements are %d",iCountSmall);
}

int main()
{   
    char Arr[50]= {'\0'};
    

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Your name is : %s \n",Arr);

    CountCapitalSmall(Arr);

    return 0;
}

