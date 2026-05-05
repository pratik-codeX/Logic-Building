#include<stdio.h>

void Display()
{
   static int i = 0;        //local static varible

    printf("Jay Ganesh...: %d \n",i);

    i++;

    Display();
}

int main()
{
    Display();

    return 0;

}
//c startup routin gets call before main internally