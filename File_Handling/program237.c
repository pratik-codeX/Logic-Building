#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    char Fname[20]={'\0'};
    int fd = 0 , iRet = 0;
    char Buffer[50] = {'\0'};    //vaati

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

   fd = open(Fname, O_RDONLY);       // Change ahe yaat like bookmark pustak ethun pudhe ughdnare APPEND mule 
   
        if(fd == -1)
        {
            printf("Unable to open file ");
        }
        else
        {
            printf("File is succesfully opned \n");
                        
            iRet = read(fd,Buffer,11); 

            printf("%d Bytes gets read succesfully",iRet);

            printf("Data from file is : %s \n",Buffer);

             iRet = read(fd,Buffer,20);     // 11 pasun pudhe read kel jail

            printf("%d Bytes gets read succesfully",iRet);

            printf("Data from file is : %s \n",Buffer);



            close(fd);
        }

    return 0;
}