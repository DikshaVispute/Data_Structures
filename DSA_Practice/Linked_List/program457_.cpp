// Doubly Linear Linked List ( Generic )

#include <iostream>
using namespace std;

template <class T>
struct DoublyLLLnode
{
    T data;
    struct DoublyLLLnode *next;
    struct DoublyLLLnode *prev;
};

template <class T>
class DoublyLLL
{
    private :
        struct DoublyLLLnode<T> *first;
        int iCount;

    public:
        DoublyLLL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void DeleteFirst();
        void DeleteLast();
        void Display();
        int Count();
        void InsertAtPos(T no, int pos);
        void DeleteAtPos(int pos);
};

template <class T>
DoublyLLL<T> :: DoublyLLL()
{
    cout<<"Inside Constructor of DoublyLLL\n";

    this->first = NULL;
    this->iCount = 0;
}

template <class T>
void DoublyLLL<T> :: InsertFirst(T no)
{
    struct DoublyLLLnode<T> * newn = NULL;
    newn = new struct DoublyLLLnode<T>;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }
    iCount++;
}

template <class T>
void DoublyLLL<T> :: InsertLast(T no)
{
    struct DoublyLLLnode<T> * newn = NULL;
    struct DoublyLLLnode<T> * temp = NULL;
    newn = new struct DoublyLLLnode<T>;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = newn;
    }

    else
    {
        temp = first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev= temp;
    }

    iCount++;
}

template <class T>
void DoublyLLL<T> :: DeleteFirst()
{
    struct DoublyLLLnode<T> * temp = NULL;

    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        free(first);
        first = NULL;
    }
    else
    {
        temp = first;

        first = first->next;
        first->prev = NULL;

        delete temp;
    }

    iCount--;
}

template <class T>
void DoublyLLL<T> :: DeleteLast()
{
    struct DoublyLLLnode <T> * temp = NULL;

    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        temp = first;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    iCount--;
}

template <class T>
void DoublyLLL<T> :: Display()
{
    struct DoublyLLLnode<T> * temp = NULL;

    temp = first;
    while(temp != NULL)
    {
        cout<<" | "<<temp->data<<" |<=>";
        temp = temp->next;
    }

    cout<<"NULL\n";
}

template <class T>
int DoublyLLL<T>::Count()
{
    return iCount;
}

template <class T>
void DoublyLLL<T> :: InsertAtPos(T no, int pos)
{
    struct DoublyLLLnode <T> * temp = NULL;
    struct DoublyLLLnode <T> * newn = NULL;
    int iCnt = 0;

    if((pos < 1) || (pos > iCount+1))
    {
        printf("Invalid position\n");
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
        newn = new struct DoublyLLLnode <T>;

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = first;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        newn->prev = temp;
        temp->next = newn;

        iCount++;
    }
}

template <class T>
void DoublyLLL<T> :: DeleteAtPos(int pos)
{
    struct DoublyLLLnode<T> * temp = NULL;
    int iCnt = 0;

    if((pos < 1) || (pos > iCount))
    {
        printf("Invalid position\n");
        return;
    }
    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        iCount--;
    }
}

int main()
{
    DoublyLLL<int> dobj;
    int iRet = 0;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    dobj.DeleteFirst();

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    dobj.DeleteLast();

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    dobj.InsertAtPos(105,4);

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    dobj.DeleteAtPos(4);

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    return 0;
}