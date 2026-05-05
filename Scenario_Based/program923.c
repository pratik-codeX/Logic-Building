#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool CheckLoop(PNODE first)
{
    bool bFlag = false;

    PNODE fast = first;
    PNODE slow = first;

    while(fast != NULL && fast->next != NULL)       //short circuit evluation (when fist condition is false then && dont check for second condition)
    {
        fast = fast->next->next;

        if(fast == slow)
        {
            bFlag = true;
            break;
        }
        
        slow = slow->next;

        if(fast == slow)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

int main()
{
    int pos = 4, i = 0;
    PNODE head = NULL;
    bool bRet = false;

    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);
    InsertLast(&head,111);
    InsertLast(&head,121);
    InsertLast(&head,151);


    bRet = CheckLoop(head);

    if(bRet)
    {
        printf("Loop Exists\n");
    }
    else
    {
        printf("Loop does not Exist\n");
    }

    return 0;
}