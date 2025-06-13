
        // File Header
////////////////////////////////////////////////////
//
//  File name : program2.c
//  Description : Used to calculate percentage
//  Author : Pratik Nanasaheb Raut
//  Date : 28/04/2025
//
////////////////////////////////////////////////////
#include<stdio.h>
int main()
{
    int Total = 0;
    int Obtained = 0;
    float Percentage = 0.0f;

    printf("Enter your total Marks :");
    scanf("%d",&Total);

    printf("Enter your obtained Marks :");
    scanf("%d",&Obtained);

    Percentage = ((float)Obtained /(float) Total) * 100 ;  

    printf("Percentage is : %.2f%% \n", Percentage); 

    return 0;
}