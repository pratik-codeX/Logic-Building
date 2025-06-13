#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    char Fname[20]={'\0'};
    int fd = 0 , iRet = 0;
    char Buffer[] = "India is my country";

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

   fd = open(Fname,O_RDWR | O_APPEND);       // Change like bookmark pustak ethun pudhe ughdnare APPEND mule 
   
        if(fd == -1)
        {
            printf("Unable to open file ");
        }
        else
        {
            printf("File is succesfully opened \n");
                        //(where,what,how many)
            iRet = write(fd,Buffer,strlen(Buffer)); //the Buffer gets overwritten

            printf("%d Bytes gets written succesfully",iRet);



            close(fd);
        }

    return 0;
}