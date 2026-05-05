//Floid Algorithm
//logic remember
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

# define ERR_NO_ELEMENT_FOUND

typedef struct node
{
    int data;
    struct node * next;;
}NODE,*PNODE,**PPNODE;

//Nodes gets inserted in the increasing order
void InsertSortedIncUnique(PPNODE first,int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*first == NULL) || (no < (*first)->data))
    {
        newn-> next = *first;
        *first = newn;
    }
    else    
    {
        temp = *first;

        while(temp->next != NULL && (temp->next->data < no))
        {
            temp = temp -> next;
        }

        if(temp -> next == NULL && temp -> data == no)
        {
            free(newn);
            return; 
        }
        if(temp -> next != NULL)
        {
            if((temp -> data == no ) || (temp -> next -> data == no))
            {
                free(newn);
                return;
            }
        }

            newn -> next = temp -> next;
            temp -> next = newn;

    }
}

void Display(PNODE first)
{
    while(first)
    {
        printf("| %d |->",first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int MiddleElement(PNODE first)  // N + N/2
{
    int iCount = 1 , Middle = 0;
    PNODE temp = first;

    if(first == NULL)
    {
        return -1;
    }

    while(temp)
    {
        temp = temp->next;
        iCount++;
    }

    Middle = iCount / 2;
    printf("Middle index is :%d\n",Middle);

    for(iCount = 1; iCount < Middle;iCount++)
    {
        first = first -> next;
    }

    return (first -> data);
}


int MiddleElementX(PNODE first) // N/2
{
    PNODE student = first;
    PNODE teacher = first;

    if(first == NULL)
    {
        return -1;
    }

    while((teacher != NULL) && (teacher -> next != NULL))
    {
        teacher = teacher -> next -> next;
        student = student -> next;
    }

    return (student->data);
}

int main()
{

    PNODE head = NULL;
    int iRet = 0;

    InsertSortedIncUnique(&head,11);
    InsertSortedIncUnique(&head,21);   

    Display(head);

    iRet = MiddleElement(head);
    printf("Middle element is %d",iRet);


    return 0;
}