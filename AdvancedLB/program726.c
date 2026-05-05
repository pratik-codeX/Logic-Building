//12    35  45  89  90  99
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node * next;;
}NODE,*PNODE,**PPNODE;

//Nodes gets inserted in the increasing order
void InsertSortedInc(PPNODE first,int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    //First element
    if(*first == NULL)
    {
        *first = newn;
    }
    else    //Second onwards
    {
        if(no < (*first)->data);  //if it is smaller than first element
        {
            newn-> next = *first;
            *first = newn;
            return;
        }
        temp = *first;

        while(temp->next != NULL)
        {

            if((temp->data < no) && (temp->next->data > no))
            {
                break;
            }
            temp = temp -> next;
        }
        if(temp -> next == NULL && no > temp -> data)   // if it is greater than last element 
        {
            temp -> next = newn;
            return;
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



int main()
{

    PNODE head = NULL;



    InsertSortedInc(&head,11);
    InsertSortedInc(&head,7);
    InsertSortedInc(&head,21);
    InsertSortedInc(&head,51);
    InsertSortedInc(&head,40);
    InsertSortedInc(&head,75);
    InsertSortedInc(&head,51);

        Display(head);

    return 0;
}