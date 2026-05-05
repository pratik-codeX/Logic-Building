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

int LastNthNode(PNODE first, int iPos)
{
    PNODE temp1 = first;
    PNODE temp2 = first;

    if(first == NULL)
    {
        printf("Linkedlist is empty\n");
        return -1;
    }

    int i = 0;

    for(i = 1; i <= iPos; i++)
    {   
        if(temp1 == NULL)
        {
            printf("Invalid Positoin\n");
            return -1;
        }

        temp1 = temp1 -> next;
    }

     while(temp1 != NULL)
        {
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
    return (temp2->data);
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);
    InsertLast(&head,111);
    InsertLast(&head,121);
    InsertLast(&head,151);
    InsertLast(&head,201);

    Display(head);

    iRet = LastNthNode(head,3);

    printf("Last Nth Node is : %d\n",iRet);

    return 0;
}//Convert this code into C++,Java and must dry run 

//Task: 