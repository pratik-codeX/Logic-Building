/*
    Start 
        Accept percentage form user 
            if percentage is less than 0 and greater than 100 
                display as invalid input
            If percentage is greater than 0 and less than 35 
                display as fail
            If percentage is greater than 35 and less than 50 
                display as pass class 
            If percentage is greater than 50 and less than 60 
                Display as second class
            If percentage is greater than 60 and greater than 70 
                display as first class
              If percentage is greater than 70 and greater than 100 
                display as first class with distinction

*/

#include<stdio.h>

void DisplayClass(float fPerc)
{
    if((fPerc < 0.0f)  || (fPerc > 100.0f))
    {
        printf("unable to proceed as input is invalid \n");
        return;
    }
    if((fPerc >= 0.0f)  && (fPerc < 35.0f))
    {
        printf("You are Fail !!\n");
    }
    else if((fPerc >= 35.0f) && (fPerc < 50.0f))
    {
        printf("Pass class\n");
    }
    else if((fPerc >= 50.0f) && (fPerc < 60.0f))
    {
        printf("Second class\n");
    }
    else if((fPerc >= 60.0f) && (fPerc < 70.0f))
    {
        printf("First class\n");
    }
    else if((fPerc >= 70.0f) && (fPerc <= 100.0f))
    {
        printf("Congratulation you have passed with fist class with Distinction\n");
    }
}


int main()
{
    float fValue = 0.0f;

    printf("Please Enter your Percentage :");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}
