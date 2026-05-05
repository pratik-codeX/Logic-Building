#include<stdio.h>

void Display()
{
   static int i = 1;       

   if(i <= 3)
   {
    printf("Jay Ganesh...: %d \n",i);
    i++;
    Display();
   }
}

int main()
{
    Display();

    return 0;

}
//c startup routin gets call before main internally
//in recussive approch do code in iterative and then convert it into recursive
//doing code in recursive into iteration code the loop into while first