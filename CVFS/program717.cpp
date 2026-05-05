/////////////////////////////////////////////////////////////////////////
//
//  Header file inclusion
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<stdbool.h>

#include<iostream>

using namespace std;

//////////////////////////////////////////////////////////////////////////
//
//  User Defined Macros
//
//////////////////////////////////////////////////////////////////////////

# define MAXFILESIZE 100

# define MAXINODE 5

# define READ 1
# define WRITE 2
# define EXECUTE 4 

#define REGULARFILE 1
#define SPECIALFILE 2

# define START 0
# define CURRENT 1
# define END 2

//////////////////////////////////////////////////////////////////////////
//
//  User Defined Macros for Error Handling
//
//////////////////////////////////////////////////////////////////////////

# define ERR_INVALID_PARAMETER -1
# define ERR_NO_INODES -2
# define ERR_FILE_ALREADY_EXIST -3

//////////////////////////////////////////////////////////////////////////
//
//  Structure Name : BootBlock
//  Description:     Hold the information to boot the operating system  
//
//////////////////////////////////////////////////////////////////////////

struct BootBlock
{
    char Information[100];
};

//////////////////////////////////////////////////////////////////////////
//
//  Structure Name : SuperBlock
//  Description:     Hold the information about the file system
//
//////////////////////////////////////////////////////////////////////////

struct SuperBlock
{
    int TotalInodes;
    int FreeInodes;
};

///////////////////////////////////////////////////////////////////////////
//
//  Structure Name : Inode
//  Description:     Hold the information about the file
//
//////////////////////////////////////////////////////////////////////////

typedef struct Inode
{
    char FileName[50];
    int InodeNumber;
    int FileSize;
    int ActualFileSize;
    int FileType;
    int ReferenceCount;
    int LinkCount;
    int Permission;
    char *Buffer;
    struct Inode * next;
}INODE, *PINODE, **PPINODE;

///////////////////////////////////////////////////////////////////////////
//
//  Structure Name : FileTable
//  Description:     Hold the information about the opened file
//
//////////////////////////////////////////////////////////////////////////

typedef struct FileTable
{   
    int ReadOffset;
    int WriteOffset;
    int Count;
    int Mode;
    PINODE ptrinode;
}FILETABLE,*PFILETABLE;

///////////////////////////////////////////////////////////////////////////
//
//  Structure Name : UAREA
//  Description:     Hold the information about the Process
//
//////////////////////////////////////////////////////////////////////////

struct UAREA
{
    char ProcessName[50];
    PFILETABLE UFDT[MAXINODE];
};

///////////////////////////////////////////////////////////////////////////
//
//  Global variables or objects in projects
//
//////////////////////////////////////////////////////////////////////////

BootBlock bootobj;
SuperBlock superobj;
PINODE head = NULL;
UAREA uareaobj;



//////////////////////////////////////////////////////////////////////////
//
//  Function Name :     InitialiseUArea
//  Description :       It is used to intialise the contents of UAREA
//  Author :            Piyush Manohar Khairnar
//  Date :              10/08/2025
//
//////////////////////////////////////////////////////////////////////////

void InitialiseUAREA()
{
    strcpy(uareaobj.ProcessName,"myexe");

    int i = 0;

    while(i < MAXINODE)
    {
        uareaobj.UFDT[i] = NULL;
        i++;
    }
    cout<<"Marvellous CVFS : SuperBlock initialized succesfully\n";
}

//////////////////////////////////////////////////////////////////////////
//
//  Function Name :     InitialiseSuperBlock
//  Description :       It is used to intialise the contents of super block
//  Author :            Piyush Manohar Khairnar
//  Date :              10/08/2025
//
//////////////////////////////////////////////////////////////////////////

void InitialiseSuperBlock()         //auxilary data
{
    superobj.TotalInodes = MAXINODE;
    superobj.FreeInodes = MAXINODE;

    cout<<"Marvellous CVFS : SuperBlock initialized succesfully\n";
}

//////////////////////////////////////////////////////////////////////////
//
//  Function Name :     CreateDILB
//  Description :       It is used to Create Linked List of Inodes
//  Author :            Piyush Manohar Khairnar
//  Date :              10/08/2025
//
//////////////////////////////////////////////////////////////////////////

void CreateDILB()
{
    int i = 1;
    PINODE newn = NULL;
    PINODE temp = head;

    while(i <= MAXINODE)
    {
        newn = new INODE;

        newn->InodeNumber = i;
        newn->FileSize = 0;
        newn->ActualFileSize = 0;
        newn->LinkCount = 0;
        newn->Permission = 0;
        newn->Buffer = NULL;
        newn->next = NULL;

        if(temp == NULL)
        {
            head = newn;
            temp = head;
        }
        else
        {
            temp->next = newn;
            temp = temp->next;
        }

        i++;
    }

    cout<<"Marvellous CVFS : DILB created succesfully\n";
}

//////////////////////////////////////////////////////////////////////////
//
//  Function Name :     StartAuxilaryDataInitialisation
//  Description :       It is used to intialise the Auxilary Data
//  Author :            Piyush Manohar Khairnar
//  Date :              10/08/2025
//
//////////////////////////////////////////////////////////////////////////

void StartAuxilaryDataInitialisation()
{

    strcpy(bootobj.Information,"Boot process of Operationg System is done");

    cout<<bootobj.Information<<"\n";

    InitialiseSuperBlock();

    CreateDILB();

    InitialiseUAREA();

    cout<<"Marvellous CVFS : Auxilary data intalized succesfully\n";
}

//////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DisplayHelp
//  Description :       It is used to Display the information about command
//  Author :            Piyush Manohar Khairnar
//  Date :              11/08/2025
//
//////////////////////////////////////////////////////////////////////////

void DisplayHelp()
{
    printf("--------------------------------------------------------------------\n");
    printf("----------------Command Manual of Marvellous CVFS-------------------\n");
    printf("--------------------------------------------------------------------\n");

    printf("exit : It is used to terminate the shell of Marvellous CVFS\n");
    printf("clear : It is used to clear the console of Marvellous CVFS\n");

    //Add more options here

    printf("--------------------------------------------------------------------\n");
}

//////////////////////////////////////////////////////////////////////////
//
//  Function Name :     ManPage
//  Description :       It is used to Display the Manual Page of the Command
//  Input :             It access the command name
//  Output :            Displays the manual details of the command
//  Author :            Piyush Manohar Khairnar
//  Date :              11/08/2025
//
//////////////////////////////////////////////////////////////////////////

void ManPage(
                char *name      //Name of Command
            )
{
    if(strcmp(name,"creat") == 0)
    {
        printf("Description : This command is used to create new regualar file on our file system\n");

        printf("Usage : Create File_name Permissions\n");
        printf("File_name : The name of file that you want to create \n");
        printf("Permission : \n 1 : read, \n2 : write ,\n 3 : Read + Write\n");
    }
    else if(strcmp(name,"exit") == 0)
    {
        printf("Description : This command is used to terminate the Marvellous CVFS\n");

        printf("Usage : exit\n");
       
    }
    //Add more options here
    else
    {
        printf("No manual entry for %s\n",name);
    }
}

//////////////////////////////////////////////////////////////////////////
//
//  Function Name :     IsFileExists
//  Description :       It is used to check whether the given file name is exist or not 
//  Input :             It accept the file name 
//  Output :            it returns the boolean value(True : if present  False : if file is not present)
//  Author :            Piyush Manohar Khairnar
//  Date :              11/08/2025
//
//////////////////////////////////////////////////////////////////////////

bool IsFileExists(
                    char *name          //Name of file that we want to check
                )
{
    PINODE temp = head;
    bool bFlag = false;

    while(temp != NULL)
    {
        if((strcmp(name,temp->FileName) == 0) && (temp->FileType == REGULARFILE))
        {
            bFlag = true;
            break;
        }
        temp = temp->next;
    }

    return bFlag;
}

//////////////////////////////////////////////////////////////////////////
//
//  Function Name :     CreateFile
//  Description :       It is used to create a new regular file 
//  Input :             It accept the file name and permission
//  Output :            it returns the file descriptor
//  Author :            Piyush Manohar Khairnar
//  Date :              11/08/2025
//
//////////////////////////////////////////////////////////////////////////

int CreateFile(
                char *name,         //name of file
                int permission      //Permission to create file
            )
{
    //Filters with aronous checks

    // If file name is Missing
    if(name == NULL)
    {
        return ERR_INVALID_PARAMETER;
    }

        // If Entered Permission is invalid
    if(permission  < 1 || permission > 3)
    {
        return ERR_INVALID_PARAMETER;
    }

    //Check whether empty inode is there or not
    if(superobj.FreeInodes == 0)
    {
        return ERR_NO_INODES;
    }

    //Check whether file is already exist or not
    if(IsFileExists(name) == true)
    {
        return ERR_FILE_ALREADY_EXIST;
    }

    
}

//////////////////////////////////////////////////////////////////////////
//
//  Entry point function of project (main)
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    char str[80] = {'\0'};       //console vr max 80 char bastat
    int iCount = 0;
    int iRet = 0;
    char Command[5][80];

    StartAuxilaryDataInitialisation();

    cout<<"--------------------------------------------------------------------\n";
    cout<<"---------------Marvellous CVSF Started Succefully-------------------\n";
    cout<<"--------------------------------------------------------------------\n";

    while(1)        
    {
        fflush(stdin);  //keyboard cha buffer clear krt means enter

        printf("\nMarvellous CVFS > ");
        fgets(str,sizeof(str),stdin);    
        
        iCount = sscanf(str,"%s %s %s %s",Command[0],Command[1],Command[2],Command[3]);  

        if(iCount == 1)
        {
            //Marvellous CVFS > exit

            if(strcmp(Command[0],"exit") == 0)
            {
                printf("Thank you for using Marvellous CVFS \n");
                printf("Deallocating all the resources...\n");

                break;
            }

            //Marvellous CVFS > help 

            else if(strcmp(Command[0],"help") == 0)
            {
                DisplayHelp();
            }

                //Marvellous CVFS > clear 

            else if(strcmp(Command[0],"clear") == 0)
            {
                system("clear");
            }
        } //End of if iCount == 1 it is teritory marking comment
        else if(iCount == 2)
        {
            //Marvellous CFS > man creat

            if(strcmp(Command[0],"man") == 0 )
            {
                ManPage(Command[1]);
            }
        } //End of if iCount == 2
        else if(iCount == 3)
        {
            //Marvellous CFS > creat Ganesh.txt 3
            if(strcmp(Command[0],"creat") == 0)
            {
                iRet = CreateFile(Command[1],atoi(Command[2]));

                if(iRet == ERR_INVALID_PARAMETER)
                {
                    printf("Error : Invalid Parameters for the functions\n");
                    printf("Please check Man page for more details\n");
                }
                else if(iRet == ERR_NO_INODES)
                {
                    printf("Error : Unable to create file as there is no Inodes\n");
                }
                else if(iRet == ERR_FILE_ALREADY_EXIST)
                {
                    printf("error : Unable to create file as file is already existing\n");
                }
            }
        } //End of if iCount == 3
        else if(iCount == 4)
        {

        } //End of if iCount == 4
        else
        {
            printf("Command not found...\n");
            printf("Please refer Help option or use man command");
        }//End of invalid command part
    }//End of while (Custom shell)

    return 0;
}//End of main