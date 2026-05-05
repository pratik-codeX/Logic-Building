#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node<T>  * next;
};

template<class T>
class SinglyCLL
{
    private:            
    struct node<T> * first;
    struct node<T>  * last;
    int iCount;

    public:
    SinglyCLL();
    void InsertFirst(T no);
    void InsertLast(T no);
    void DeleteFirst();
    void DeleteLast();
    void Display();
    void DeleteAtPos(int pos);
    void InsertAtPos(T no,int pos);
    int Count();
};

template<class T>
SinglyCLL<T>::SinglyCLL()
{
    cout<<"Inside Constructor inside CLL\n";
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

template<class T>
void SinglyCLL<T>::InsertFirst(T no)
{
    struct node<T>  * newn = NULL;

    newn = new struct node<T> ;

    newn -> data = no;
    newn -> next = NULL;

    if((first == NULL) && (last == NULL))       //if(iCount == 0)
    {
        first = newn;
        last = newn;

        last -> next = first;
    }
    else
    {
        newn -> next = first;
        first = newn;

        last -> next = first;
    }

    iCount++;
}       

template<class T>
void SinglyCLL<T>::InsertLast(T no)
{
    struct node<T>  * newn = NULL;

    newn = new struct node<T> ;

    newn -> data = no;
    newn -> next = NULL;

    if((first == NULL) && (last == NULL))       //if(iCount == 0)
    {
        first = newn;
        last = newn;
        
        last -> next = newn;
    }
    else
    {
        last -> next = newn;
        last = newn;

        last -> next = first;
    }
    iCount++;
}

template<class T>
void SinglyCLL<T>::DeleteFirst()
{
    if(first == NULL && last == NULL)
    {
        return;
    } 
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        first = first -> next;
        delete last-> next ;

        last -> next = first;
    }
    iCount--;
}

template<class T>
void SinglyCLL<T>::DeleteLast()
{
    struct node<T>  * temp = NULL;

    if(first == NULL && last == NULL)
    {
        return;
    } 
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {    
        temp = first;
        
        while(temp -> next != last)
        {
            temp = temp -> next;
        }
        delete last;
        last = temp;

        last -> next = first;
    }
    iCount--; 
}

template<class T>
void SinglyCLL<T>::Display()
{
    struct node<T>  * temp = first;
    if((first == NULL) && (last == NULL))
    {
        return;
    }
    do 
    {
        cout<<" | "<<temp->data << " | ->";
        temp = temp->next;
    }while(temp != last->next);
}

template<class T>
int SinglyCLL<T>::Count()
{
    return iCount;
}

template<class T>
void SinglyCLL<T>::DeleteAtPos(int pos)
{
    struct node<T>  * temp = NULL;
    struct node<T>  * target = NULL;
    int i = 0;

    if(pos < 1 || pos > iCount+1)
    cout<<"Invalid Position";

    return ;
    
    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == iCount+1)
    {
        DeleteLast(); 
    }
    else
    {
        temp = first;

        for(i = 1; i< pos-1;i++)
        {
            temp = temp -> next;
        }

        target = temp -> next;

        temp -> next = target -> next;

        delete target;
    }
    iCount--;
}

template<class T>
void SinglyCLL<T>::InsertAtPos(T no,int pos)
{
    struct node<T>  * temp = NULL;
    struct node<T>  * newn = NULL;

    int i = 0;

    if(pos < 1 || pos > iCount+1)
    {
        cout<<"Invalid Position";

        return ;
    }
    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(no); 
    }
    else
    {
        newn = new struct node<T> ;
        newn -> data = no;
        newn -> next = NULL;

        temp = first;

        for(i = 1;i < pos -1;i++)
        {
            temp = temp -> next;
        }

        newn = temp -> next;
        temp -> next = newn;

        iCount++;
    }
}

int main()
{
    SinglyCLL<int> sobj;

    int iRet = 0;
    int iChoice = 0;
    int iValue = 0;
    int iPos = 0;

    cout << "-------------------------------------------------------------\n";
    cout << "---------------- Singly Circular LinkedList -------------------\n";
    cout << "-------------------------------------------------------------\n\n";

    while (1)
    {
        cout << "-------------------------------------------------------------\n";
        cout << "------------------ Please select the option -----------------\n";
        cout << "-------------------------------------------------------------\n";
        cout << "1 : Insert new node at first position\n";
        cout << "2 : Insert new node at last position\n";
        cout << "3 : Insert new node at given position\n";
        cout << "4 : Delete the node from first position\n";
        cout << "5 : Delete the node from last position\n";
        cout << "6 : Delete the node from given position\n";
        cout << "7 : Display all elements of LinkedList\n";
        cout << "8 : Count number of nodes of LinkedList\n";
        cout << "0 : Terminate the application\n";
        cout << "-------------------------------------------------------------\n";

        cin >> iChoice;

        if (iChoice == 1)
        {
            cout << "Enter the data that you want to insert at first: ";
            cin >> iValue;
            sobj.InsertFirst(iValue);
        }
        else if (iChoice == 2)
        {
            cout << "Enter the data that you want to insert at last: ";
            cin >> iValue;
            sobj.InsertLast(iValue);
        }
        else if (iChoice == 3)
        {
            cout << "Enter the data that you want to insert: ";
            cin >> iValue;
            cout << "Enter the position to insert at: ";
            cin >> iPos;
            sobj.InsertAtPos(iValue, iPos);
        }
        else if (iChoice == 4)
        {
            cout << "Deleting first element...\n";
            sobj.DeleteFirst();
        }
        else if (iChoice == 5)
        {
            cout << "Deleting last element...\n";
            sobj.DeleteLast();
        }
        else if (iChoice == 6)
        {
            cout << "Enter position to delete from: ";
            cin >> iPos;
            sobj.DeleteAtPos(iPos);
        }
        else if (iChoice == 7)
        {
            cout << "Linked List elements:\n";
            sobj.Display();
        }
        else if (iChoice == 8)
        {
            iRet = sobj.Count();
            cout << "Number of elements in LinkedList: " << iRet << "\n";
        }
        else if (iChoice == 0)
        {
            cout << "Thank you for using our application\n";
            break;
        }
        else
        {
            cout << "Invalid choice, please try again.\n";
        }

        cout << "-------------------------------------------------------------\n";
    }

    return 0;
}

