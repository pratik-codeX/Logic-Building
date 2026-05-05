#include<stdio.h>

int Factorial(int iNo)
{
   static int iMulti = 1; 

  if(iNo > 1)
  {
    iMulti = iMulti * iNo;
    Factorial(iNo--);
  }

  return iMulti;
}

int main()
{
    int iRet = 0;
    int iValue = 6;

    iRet = Factorial(iValue);

    printf("Factorial is : %d",iRet );

    return 0;

}
