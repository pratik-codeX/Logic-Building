#include<stdio.h>

void strrevX(*str)
{
    char *strat = NULL;
    char *End = NULL;
    char Temp = '\0';

    start = str;
    end = str;

    while
    while( start < end)
    {
        Temp = *start;
        *start = *End;
        *End = Temp;

        start++;
        end--;

    }


}

int main()
{
    char Arr[50]={'\0'};
   
    printf("Enter the string :");
    scanf(" %[^'\n']s",Arr);

    strrevX(Arr);
    prntf("STring ager reversal is %s",Arr);
    


    return 0;
}

//time complexity is O(N+N/2)