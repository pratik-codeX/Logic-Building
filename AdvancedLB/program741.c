//Floid Algorithm
//logic remember
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

# define ERR_NO_ELEMENT_FOUND

typedef struct node
{
    int data;
    struct node * next;
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

bool CheckLoop(PNODE first)
{
    PNODE teacher = first;
    PNODE student = first;
    bool bFlag = false;

    while((teacher != NULL) && (teacher -> next != NULL))
    {
        teacher = teacher -> next -> next;
        student = student-> next;

        if(teacher == student)
        {
            bFlag = true;
            return bFlag;
        }
    }
    
    return bFlag;
}

int main()
{

    PNODE head = NULL;

    int bRet = false;

    InsertSortedIncUnique(&head,11);
    InsertSortedIncUnique(&head,21);    
    InsertSortedIncUnique(&head,51);            
    InsertSortedIncUnique(&head,101);    
    InsertSortedIncUnique(&head,111);        
    InsertSortedIncUnique(&head,121);    


    bRet = CheckLoop(head);
    if(bRet == true)
    {
        printf("Loop is there");
    }
    else
    {
        printf("Loop is not there");
    }
    
    Display(head);

    return 0;
}