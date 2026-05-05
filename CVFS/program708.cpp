/////////////////////////////////////////////////////////////////////////
//
//  Header file inclusion
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

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

void InitialiseSuperBlock()         //auxilary data  check all things are ok or not 
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
//  Entry point function of project (main)
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    StartAuxilaryDataInitialisation();

    cout<<"--------------------------------------------------------------------\n";
    cout<<"---------------Marvellous CVSF Started Succefully-------------------\n";
    cout<<"--------------------------------------------------------------------\n";

    while(1)    //shell it is infinite listning loop
    {

    }

    return 0;
}