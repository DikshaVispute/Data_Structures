// Singly Linear Linked List ( Generic )

#include <iostream>
using namespace std;

template <class T>
struct SinglyLLLnode
{
    T data;
    struct SinglyLLLnode *next;
};

template <class T>
class SinglyLLL
{
    private :
        struct SinglyLLLnode<T> *first;
        int iCount;

    public:
        SinglyLLL();
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
SinglyLLL<T> :: SinglyLLL()
{
    cout<<"Inside Constructor of SinglyLLL\n";

    this->first = NULL;
    this->iCount = 0;
}

template <class T>
void SinglyLLL<T> :: InsertFirst(T no)
{
    struct SinglyLLLnode<T> * newn = NULL;
    newn = new struct SinglyLLLnode<T>;

    newn->data = no;
    newn->next = NULL;

    newn->next = first;
    first = newn;

    iCount++;
}

template <class T>
void SinglyLLL<T> :: InsertLast(T no)
{
    struct SinglyLLLnode<T> * newn = NULL;
    struct SinglyLLLnode<T> * temp = NULL;
    newn = new struct SinglyLLLnode<T>;

    newn->data = no;
    newn->next = NULL;

    if(iCount == 0)     // updated
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
    }

    iCount++;
}

template <class T>
void SinglyLLL<T> :: DeleteFirst()
{
    struct SinglyLLLnode<T> * temp = NULL;

    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)        // else if(this->iCount == 1)
    {
        delete first;
        first = NULL;
    }
    else
    {
        temp = first;
        first = first->next;
        delete temp;
    }

    iCount--;
}

template <class T>
void SinglyLLL<T> :: DeleteLast()
{
    struct SinglyLLLnode <T> * temp = NULL;

    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)    // else if(this->iCount == 1)
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
void SinglyLLL<T> :: Display()
{
    struct SinglyLLLnode<T> * temp = NULL;

    temp = first;
    while(temp != NULL)
    {
        cout<<" | "<<temp->data<<" |->";
        temp = temp->next;
    }

    cout<<"NULL\n";
}

template <class T>
int SinglyLLL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyLLL<T> :: InsertAtPos(T no, int pos)
{
    struct SinglyLLLnode <T> * temp = NULL;
    struct SinglyLLLnode <T> * newn = NULL;
    int iCnt = 0;

    if((pos < 1 ) || (pos > iCount+1))
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
        newn = new struct SinglyLLLnode <T>;

        newn->data = no;
        newn->next = NULL;

        temp = first;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

template <class T>
void SinglyLLL<T> :: DeleteAtPos(int pos)
{
    struct SinglyLLLnode<T> * temp = NULL;
    int iCnt = 0;

    if((pos < 1 ) || (pos > iCount))
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

        target = temp->next;
        temp->next = target->next;

        delete target;

        iCount--;
    }
}

int main()
{
    SinglyLLL<int> sobj;
    int iRet = 0;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    sobj.DeleteFirst();

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    sobj.DeleteLast();

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    sobj.InsertAtPos(105,4);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    sobj.DeleteAtPos(4);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    return 0;
}