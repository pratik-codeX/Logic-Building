// Calculate ticket price based on age for amusement park
//start
// intage
//  filter 0<100 and 100>0
//  0<5 
//   free
//  5<18
//  700
// 18<50 and 18>50
//  999
// 50<100 
// 500
#include<stdio.h>

# define ERR_INVALID_AGE -1

int CalculateTicket(int iAge)
{
    int iPrice = 0;

    if(iAge < 0)
    {
        return ERR_INVALID_AGE;
    }

    if((iAge >= 0) && (iAge <= 5))
    {
        iPrice =0;
    }

    if((iAge >= 0) && (iAge <=5))
    {
        iPrice = 0;
    }

    else if ((iAge> 5) && (iAge >18))
    {
        iPrice = 700;
    }

    else if(() && ())

    

    
} 
int main()

{   
    int iValue = 0,iRet=0;



    iRet = CalculateTicket(iValue);




    return 0 ;
}