#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024        // macro cha vapar code madhe var badala sagl badlen

int main()
{
    char Fname[20]={'\0'};
    int fd = 0 , iRet = 0, iCnt = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};     //operating system cha buffer internally 1024 bufferch ghet asto   

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

   fd = open(Fname, O_RDONLY);       
   
        if(fd == -1)
        {
            printf("Unable to open file ");
        }
        else
        {
            printf("File is succesfully opned  fd  :%d\n",fd);
                        
            while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
            {
                for(iCnt = 0;iCnt < iRet;iCnt++)        //Buffer_size dil tr garbage yeil
                {
                    printf("%c\n",Buffer[iCnt]);
                }
                memset(Buffer,'\0',BUFFER_SIZE);
              
            }
            
           

            close(fd);
        }

    return 0;
}