#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    char Fname[20]={'\0'};
    int fd = 0 , iRet = 0;
    char Buffer[] = "India is my country ";

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

   fd = open(Fname,O_RDWR);       // internally : fopen() -> open() -> open Algorithm ->  kernel -> hardware    
   
        if(fd == -1)
        {
            printf("Unable to open file ");
        }
        else
        {
            printf("File is succesfully opened \n");
                        //(where,what,how many)
            iRet = write(fd,Buffer,11);

            printf("%d Bytes gets written succesfully",iRet);

            close(fd);
        }

    return 0;
}