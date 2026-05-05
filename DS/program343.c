//singly circular
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first , PPNODE last, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
        *last = newn;
    }
    else
    {
        newn -> next = *first;
        *first = newn;
        (*last) -> next = *first;
    }
}

void InsertLast(PPNODE first , PPNODE last, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL  || *last == NULL)
    {
        *first = newn;
        *last = newn;
    }
    else if((*first) -> next == NULL)
    {
        (*first)->next = newn;
        (*last)->next = *first;
    }
    else
    {
        (*last)->next = newn;
        newn -> next = *first;
    }
}

void InsertAtPos(PPNODE first , PPNODE last, int no,int pos)
{
    
}

void DeleteFirst(PPNODE first, PPNODE last)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        printf("Linked List is empty...");
        return;
    }
    else
    {
        temp = *first;

        *first = (*first) -> next;

        free(temp);
    }

}

void DeleteLast(PPNODE first , PPNODE last)
{

}

void DeleteAtPos(PPNODE first , PPNODE last , int pos)
{

}

void Display(PNODE first , PNODE last)
{
    
    do
    {
        printf( " | %d |->",first->data);
        first =first->next;
    }
    while(first  != last->next );
    

}
int Count(PNODE first , PNODE last)
{
    return 0;
}

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;

    InsertFirst(&head,&tail,101);
    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);
    Display(head,tail);

    return 0;
}