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
//  Function Name : Minimum
//  Description :   It is used to return minimum element
//  Input :         void
//  Output :        Integer
//  Auther :        Diksha Kadu Vispute
//  Date :          03/01/2026
//
///////////////////////////////////////////////////////////////////////////

        int Minimum()
        {
            int iMin = 0;
            PNODE temp = NULL;
            temp = this->first;

            iMin = temp->data;

            while(temp != NULL)
            {
                if((temp->data) < iMin)
                {
                    iMin = temp->data;
                }
                temp = temp->next;
            }
            return iMin;            
        }
};

int main()
{
    SinglyLL sobj;
    int iRet = 0;

    sobj.InsertFirst(240);
    sobj.InsertFirst(320);
    sobj.InsertFirst(20);
    sobj.InsertFirst(230);
    sobj.InsertFirst(110);

    iRet = sobj.Minimum();

    cout<<"The Smallest elements in the linked list is : "<<iRet<<"\n";

    return 0;
}