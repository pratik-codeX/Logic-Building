
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

float CalculatePercentage(int iTotalMarks,int iObtainedMarks)
{
    float fPercentageValue = 0.0f;
    fPercentageValue = ((float)iObtainedMarks/(float)iTotalMarks) * 100;

}
int main()
{
    int iTotal = 0;
    int iObtained = 0;
    float fPercentage = 0.0f;

    printf("Enter your total Marks :");
    scanf("%d",&iTotal);

    printf("Enter your obtained Marks :");
    scanf("%d",&iObtained);

    //Percentage = ((float)Obtained /(float) Total) * 100 ;  
    fPercentage = CalculatePercentage(iTotal,iObtained);
    
    printf("Percentage is : %.2f%% \n", fPercentage); 

    return 0;
}
