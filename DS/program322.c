#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first , int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));     //12byte

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)      //LL is empty
    {
        *first = newn;

    }
    else                    //LL contains atleast 1 node
    {
        newn->next = *first;       
        *first = newn;
    }
}


void InsertLast(PPNODE first , int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));    

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else                    
    {
        
    }
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf(" | %d |",first->data);
        first = first->next;
    }
    printf("NULL \n");
}

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first->next;
    }
    return iCount;
}


int main()
{
    PNODE head = NULL;
    int iRet =  0;

    InsertFirst(&head,121);
    InsertFirst(&head,111);
    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);

    iRet = Count(head);

    printf("Elements in linked list are %d",iRet);
    return 0;
}