#include<stdio.h>
#include<limits.h>

int main()
{
    int no = INT_MAX;

    printf("%d\n",no);

    no++;

    printf("%d\n",no); //its not garbage its limit of numbers that we crossed

    return 0;
}