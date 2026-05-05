#include<stdio.h>

int Factorial(int iNo)
{
   int i = 1,iMulti = 1; 

  while(i <= iNo)
  {
    iMulti = iMulti * i;
    i++;
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
