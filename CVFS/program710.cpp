#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

#include<iostream>

using namespace std;

int main()
{
    char str[80] = {'\0'};       //console vr max 80 char bastat
    int iCount = 0;
    char Command[4][80];

    cout<<"--------------------------------------------------------------------\n";
    cout<<"---------------Marvellous CVSF Started Succefully-------------------\n";
    cout<<"--------------------------------------------------------------------\n";

    printf("\nMarvellous CVFS > ");
    fgets(str,sizeof(str),stdin);    //fgets ne input str madhe 80 size with spaces ani stdin mean keyboard gets stored in str
        
    iCount = sscanf(str,"%s %s %s %s",Command[0],Command[1],Command[2],Command[3]);  //4 return values every printf and scanf have return values

    printf("Number of tokens are : %d\n",iCount);

    return 0;
}//End of main