#include<stdio.h>

int Factorial(int iNo)
{
   static int i = 1;
   static int iMulti = 1; 

  if(i <= iNo)
  {
    iMulti = iMulti * i;
    i++;
    Factorial(iNo);
  }

  return iMulti;
}

int main()
{
    int iRet = 0;
    int iValue = 6;

    iRet = Factorial(iValue);

    printf("Addition is : %d",iRet );

    return 0;

}
