//tortoise algorithm


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

//Time Complexity : N/2
int MiddleElementX(PNODE first)
{
    int iCount = 0;
    int iMid = 0;
    PNODE temp = first;
    PNODE fast = NULL;
    PNODE slow = NULL;

    fast = first;
    slow = first;

    while((fast != NULL) && (fast->next != NULL))    //N
    {
        fast = fast->next->next; 
        slow = slow->next;
    }

    return (slow->data);
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

    iRet = MiddleElementX(head);

    printf("Middle element is  : %d \n\n",iRet);

    return 0;
}