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


//Time Complexity : N
//Space Complexity : 1
void Reverse(PPNODE first)
{
    PNODE temp = NULL;
    PNODE Previous = NULL;
    PNODE Current = NULL;
    PNODE Next = NULL;

    if(*first == NULL)
    {
        return;
    }

    Current = *first;

    while(Current != NULL)  //ReversallinkedList Algorithm
    {   
        Next = Current->next;
        Current->next = Previous;
        Previous = Current;
        Current = Next;
    }

    *first = Previous;
}

int main()
{
    PNODE head = NULL;

    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);

    Display(head);

    Reverse(&head);

    printf("LinkedList after Reversed :\n");

    Display(head);

    return 0;
}//Convert this code into C++,Java