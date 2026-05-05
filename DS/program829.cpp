#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////
//
//  Class :       QueueX
//  Description : Generic implementation of queue
//  Author :      Pratik Nanaso Raut
//
//////////////////////////////////////////////////////////////////////////

template<class T>
struct Queuenode     //class node
{
    T data;
    struct Queuenode<T> *next;
};
    //incase of generics we do't have to use typedef
template<class T>
class QueueX
{
    private:
    struct Queuenode<T>* first;
    int iCount;

    public :
    QueueX();
    void Enqueue(T);
    T Dequeue();
    void Display();
    int Count();
};
template<class T>
QueueX<T> :: QueueX()
{
    first = NULL;
    iCount = 0;
}
template<class T>
void QueueX<T> :: Enqueue(T no)     //InsertLast
{
    struct Queuenode<T> * temp = NULL;
    struct Queuenode<T> * newn = NULL;

    newn = new Queuenode<T>;

    newn->data = no;
    newn->next = NULL;

  if(first == NULL)
  { 
    first = newn;
  }
  else
  {
    temp = first;

    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = newn;

  }

   iCount++;
}
template<class T>
T QueueX<T> :: Dequeue()             //DeleteFirst
{
    struct Queuenode<T> * temp = NULL;
    T value;

    if(first == NULL)
    {
        cout<<"Unalbe to remove as queue is empty\n";
        return NULL;
    }
    else
    {
        temp = first;
        value = temp -> data;

        first = first -> next;
        delete temp ;

        iCount--;
        return value; 
    }
}
template<class T>
void QueueX<T> :: Display()
{
    struct Queuenode<T>* temp = NULL;

    temp = first;
    while(temp != NULL)
    {
        cout<<"|"<<temp -> data<<"|-";
        temp = temp -> next;
    }
    cout<<"\n";
}
template<class T>
int QueueX<T> :: Count()
{
    return iCount;
}

//////////////////////////////////////////////////////////////////////////
//
//  Class :       StackX
//  Description : Generic implementation of Stack
//  Author :      Pratik Nanaso Raut
//
//////////////////////////////////////////////////////////////////////////

template <class T>
struct Stacknode     
{
    T data;
    struct Stacknode<T> *next;
};
    
template <class T>
class StackX
{
    private:
    struct Stacknode<T> * first;
    int iCount;

    public :
    StackX();
    void Push(T);
    T Pop();
    void Display();
    int Count();
};

template <class T>
StackX<T> :: StackX()
{
    first = NULL;
    iCount = 0;
}

template <class T>
void StackX<T> :: Push(T no)     //InsertFirst
{
    struct Stacknode<T> * newn = NULL;

    newn = new Stacknode<T>;

    newn->data = no;
    newn->next = NULL;

   newn -> next = first;
   first = newn;

   iCount++;
}

template <class T>
T StackX<T> :: Pop()             //DeleteFirst
{
    struct Stacknode<T> * temp = NULL;
    T value;

    if(first == NULL)
    {
        cout<<"Unalbe to pop as stack is empty\n";
        return NULL;
    }
    else
    {
        temp = first;
        value = temp -> data;

        first = first -> next;
        delete temp ;

        iCount--;
        return value; 
    }
}

template <class T>
void StackX<T> :: Display()
{
    struct Stacknode<T>* temp = NULL;

    temp = first;
    while(temp != NULL)
    {
        cout<<"|"<<temp -> data<<"|-";
        temp = temp -> next;
    }
    cout<<"\n";
}

template <class T>
int StackX<T> :: Count()
{
    return iCount;
}

//////////////////////////////////////////////////////////////////////////
//
//  Class :       SinglyCLL
//  Description : Generic implementation of Singly Circular linked list
//  Author :      Pratik Nanaso Raut
//
//////////////////////////////////////////////////////////////////////////

template<class T>
struct SinglyCLLnode
{
    T data;
    struct SinglyCLLnode<T>  * next;
};

template<class T>
class SinglyCLL
{
    private:            
    struct SinglyCLLnode<T> * first;
    struct SinglyCLLnode<T>  * last;
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
    struct SinglyCLLnode<T>  * newn = NULL;

    newn = new struct SinglyCLLnode<T> ;

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
    struct SinglyCLLnode<T>  * newn = NULL;

    newn = new struct SinglyCLLnode<T> ;

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
    struct SinglyCLLnode<T>  * temp = NULL;

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
    struct SinglyCLLnode<T>  * temp = first;
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
    struct SinglyCLLnode<T>  * temp = NULL;
    struct SinglyCLLnode<T>  * target = NULL;
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
    struct SinglyCLLnode<T>  * temp = NULL;
    struct SinglyCLLnode<T>  * newn = NULL;

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
        newn = new struct SinglyCLLnode<T> ;
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

//////////////////////////////////////////////////////////////////////////
//
//  Class :       DoublyCLL
//  Description : Generic implementation of Singly Circular linked list
//  Author :      Pratik Nanaso Raut
//
//////////////////////////////////////////////////////////////////////////

template<class T>
struct DoublyCLLnode
{
    T data;
    struct DoublyCLLnode<T> *next;
    struct DoublyCLLnode<T> *prev;
};

template<class T>
class DoublyCLL
{   
    private :               
        struct DoublyCLLnode<T> * first;
        struct DoublyCLLnode<T> * last;
        int iCount;

    public :               
        DoublyCLL();
        void Display();
        int Count();
        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T,int);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

};

template<class T>
DoublyCLL<T> :: DoublyCLL()
{
    first = NULL;
    last = NULL;
    iCount = 0;

    cout<<" Inside constructor\n";
}

template<class T>
void DoublyCLL<T> :: InsertFirst(T no)           //return Classname ::(scope resolution) functionname
{
    struct DoublyCLLnode<T>* newn = NULL;

    newn = new struct DoublyCLLnode<T>;

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(first == NULL && last == NULL)           //LL is empty
    {
       first = newn;
       last = newn;

    }
    else                                       //LL contains atleast one node
    {
        newn -> next = first;
        first -> prev = newn;

        first = newn;
    }

    last -> next = first ;
    first -> prev = last;
    iCount++;
}

template<class T>
void DoublyCLL<T> :: InsertLast(T no)
{
    struct DoublyCLLnode<T> * newn = NULL;

    newn = new struct DoublyCLLnode<T> ;

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(first == NULL && last == NULL)           //LL is empty
    {
       first = newn;
       last = newn;

    }
    else                                       //LL contains atleast one node
    {
       last -> next = newn;
       newn -> prev = last;

       last = newn;
    // newn -> next = first; 
    }

    last -> next = first;
    first -> prev = last;
    iCount++;
}

template<class T>
void DoublyCLL<T> :: Display()
{
    struct DoublyCLLnode<T> * temp = NULL;

    cout<<"Elements of the Linked List are : \n";

    temp = first;

    if(first == NULL && last == NULL)           //LL is empty
    {
        cout<<"LinkedList is empty";
        return;
    }
    do  
    {   
         cout<< " | " <<temp -> data <<" | <=>" ;
        temp = temp -> next;
       
    }while(temp != first);
    cout<<"\n";
}

template<class T>
int DoublyCLL<T> :: Count()
{
    return iCount;
}

template<class T>
void DoublyCLL<T> :: DeleteFirst()
{

    if(first == NULL && last == NULL)       //LL is empty
    {
        cout<<"Linked List is empty";
        return;
    }
    else if(first == last)                  //LL contains one node
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else                                    //LL contains more than one node
    {
        first = first -> next;
        delete first -> prev ;                 // delete last-> next

        last -> next = first;
        first -> prev = last;
    }
    iCount--;
}

template<class T>
void DoublyCLL<T> :: DeleteLast()
{

    if(first == NULL && last == NULL)       //LL is empty
    {
        cout<<"Linked List is empty";
        return;
    }
    else if(first == last)                  //LL contains one node
    {
        delete last;
        first = NULL;
        last = NULL;
    }
    else                                    //LL contains more than one node
    {
        last = last -> prev;
        delete last -> next;
        
        last -> next = first;
        first -> prev = last;
    }
    iCount--;
}

template<class T>
void DoublyCLL<T> :: InsertAtPos(T no,int pos)
{
    struct DoublyCLLnode<T> * temp = NULL;
    int iCnt = 0;
    struct DoublyCLLnode<T> * newn = NULL;

    if(pos < 1 || pos > iCount+1 )
    {
        cout<<"Invalid Position \n";
        return;
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
        newn = new struct DoublyCLLnode<T>;

        newn -> data = no;
        newn -> next = NULL;
        newn -> prev = NULL;

        temp = first;

        for(iCnt = 1;iCnt < pos -1;iCnt++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next -> prev = newn;

        temp -> next = newn;
        newn -> prev = temp;

        iCount++;
    }
}

template<class T>
void DoublyCLL<T> :: DeleteAtPos(int pos)
{
    struct DoublyCLLnode<T> * temp = NULL;
    int iCnt = 0;

    if(pos < 1 || pos > iCount )
    {
        cout<<"Invalid Position \n";
        return;
    }
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

        for(iCnt = 1;iCnt < pos -1;iCnt++)
        {
            temp = temp -> next;
        }

        temp -> next = temp -> next -> next;
        delete temp -> next -> prev;
        temp -> next -> prev = temp;

        iCount--;
    }
}

//////////////////////////////////////////////////////////////////////////
//
//  Class :       SinglyLL  (progra330.c)->(program330.cpp)->(generic)
//  Description : Generic implementation of Singly linear linked list
//  Author :      Pratik Nanaso Raut
//
//////////////////////////////////////////////////////////////////////////

//Add code

struct SinglyLLnode 
{
    int data;
    struct SinglyLLnode* next;
};

class SinglyLL
{
    private:
    struct SinglyLLnode * first;
    int iCount;

    public:
    SinglyLL();
    void InsertFirst(int);
    void InsertLast(int);
    void InsertAtPos(int,int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    void Display();
    int Count();
};

SinglyLL :: SinglyLL()
{
    first = NULL;
    iCount = 0;
}

void SinglyLL :: InsertFirst(int no)
{
    struct SinglyLLnode * newn  = NULL;

    newn = new struct SinglyLLnode;
    newn -> next = NULL;
    newn -> data = no;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn -> next = first;
        first = newn;
    }
    iCount++;
}

void SinglyLL :: InsertLast(int no)
{
    struct SinglyLL * newn = NULL;
    struct SinglyLL * temp = NULL;
    
    newn = new struct SinglyLLnode;
    newn -> next = NULL;
    newn -> data = no;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        temp = first;
        while(temp != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;
    }
    iCount++;
}

//////////////////////////////////////////////////////////////////////////
//
//  Class :       DoublyLL  (program342.c)-> .cpp -> generic
//  Description : Generic implementation of Doubly linear linked list
//  Author :      Pratik Nanaso Raut
//
//////////////////////////////////////////////////////////////////////////

//Add code


//////////////////////////////////////////////////////////////////////////
//  
//  Class :       BST   (program571.c)-> .cpp -> Generic
//  Description : Generic implementation of Binary Search Tree 
//  Author :      Pratik Nanaso Raut
//
//////////////////////////////////////////////////////////////////////////

//Add Code


//////////////////////////////////////////////////////////////////////////
//  
//  Class :       Sorting  (program595.cpp)-> generic
//  Description : Generic implementation of sorting algorithms 
//  Author :      Pratik Nanaso Raut
//
//////////////////////////////////////////////////////////////////////////

//Add Code



//////////////////////////////////////////////////////////////////////////
//  
//  Class :       Sorting  (program587.cpp)-> generic
//  Description : Generic implementation of searching algorithms 
//  Author :      Pratik Nanaso Raut
//
//////////////////////////////////////////////////////////////////////////

//Add Code

//////////////////////////////////////////////////////////////////////////
//  
//  Assignment no. 34,35,36 functions convert into c++ -> generic
//  write all functions logic in all types of linked list
//  all other functions in stl but this are additional functionlitiesx
//////////////////////////////////////////////////////////////////////////

//Add Code

int main()
{
    
    return 0;
}
