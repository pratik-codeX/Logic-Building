
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
    int Obtained = 320;
    float Percentage = 0.0f;

    Percentage = (Obtained / Total) * 100 ;

    printf("Percentage is : \n", Percentage); 

    return 0;
}