#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyLL
{
    private:
        PNODE first;

    public:
        SinglyLL()
        {
            this->first = NULL;
        }

        void InsertFirst(int no)
        {
            PNODE newn = NULL;
            newn = new NODE;

            newn->data = no;
            newn->next = NULL;

            if(first == NULL)
            {
                this->first = newn;
            }
            else
            {
                newn->next = this->first;
                this->first = newn;
            }
        }

///////////////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionEven
//  Description :   It is used to return Addition of even elements
//  Input :         void
//  Output :        Integer
//  Auther :        Diksha Kadu Vispute
//  Date :          03/01/2026
//
///////////////////////////////////////////////////////////////////////////

        int AdditionEven()
        {
            int iSum = 0;
            PNODE temp = NULL;
            temp = this->first;

            while(temp != NULL)
            {
                if(((temp->data) % 2 ) == 0)
                {
                    iSum = iSum + temp->data;
                }
                temp = temp->next;
            }
            return iSum;            
        }
};

int main()
{
    SinglyLL sobj;
    int iRet = 0;

    sobj.InsertFirst(41);
    sobj.InsertFirst(32);
    sobj.InsertFirst(20);
    sobj.InsertFirst(11);

    iRet = sobj.AdditionEven();

    cout<<"addition of even elements in the linked list is : "<<iRet<<"\n";

    return 0;
}