
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
    int Total = 400;
    int Obtained = 323;
    float Percentage = 0.0f;

    Percentage = ((float)Obtained /(float) Total) * 100 ;  

    printf("Percentage is : %.2f%% \n", Percentage); 

    return 0;
}