#include<stdio.h>

void Display(char str[])
{
    printf("%c\n",str[0]);  //*(str + 0)  
    
    
    printf("%c\n",str[1]);
    
    
    printf("%c\n",str[2]);
    

    printf("%c\n",str[3]);

    

}

int main()
{   
    char Arr[50]= {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Your name is : %s \n",Arr);

    Display(Arr);

    return 0;
}

