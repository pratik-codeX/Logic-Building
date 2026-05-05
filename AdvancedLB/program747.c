#include<stdio.h>
#include<stdbool.h>

/*  input = 145
    output = 5! + 4! + 1! 
            120 + 24 + 1
            145
            true
*/  

bool CheckStrong(int iNo)
{
    int iDigit = 0;
    int iTemp = iNo;
    int iSum = 0;
    int iFact = 0, i = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iFact = 1;
        for(i=1;i<= iDigit ; i++)
        {
            iFact = iFact * i;
        }
        iSum = iSum + iFact;
        iNo = iNo / 10;
    }

    if(iSum == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    
    bRet = CheckStrong(iValue);    //StrongNumber;

    if(bRet == true)
    {
        printf("%d is strong number \n",iValue);
    }
    else
    {
        printf("%d is not strong nubmer\n",iValue);
    }

    return 0;
}

/*
    krushnamurti number,peterson number, strong number are same     sandip batra & subhanshu trivedi

interviewer will give the long description regarding with the scenario with the question and write the code it is like descriptionche questions
*/