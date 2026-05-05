#include<stdio.h>
#include<stdlib.h>

typedef struct node   
{
    int data;           
    struct node *next;     
}NODE,* PNODE,**PPNODE;



void InsertLast(PPNODE first , int no)     
{
     PNODE newn = NULL; 
     PNODE temp = NULL ;                 

    newn = (PNODE)malloc(sizeof(NODE));   

    newn->data = no;                        
    newn->next = NULL;                      

    if(*first == NULL)                         
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
            temp -> next = newn;
    }
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int MiddleElement(PNODE first)
{
    int iCount = 0;
    int iMid = 0;
    PNODE temp = first;


    while(first != NULL)
    {
        first = first-> next;
        iCount++;
    }

    iMid = (iCount / 2) + 1;

    first = temp;

    for(int i = 1; i < iMid; i++)
    {
        first = first->next;
    }

    return (first->data);
}

int main()
{
    PNODE head = NULL;

    int iRet = 0,pos = 0;

    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);
    InsertLast(&head,111);


    Display(head);

    iRet = MiddleElement(head);

    printf("Middle element is  : %d \n\n",iRet);

  

    return 0;
}