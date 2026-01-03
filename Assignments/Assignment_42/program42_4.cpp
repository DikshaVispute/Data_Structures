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
//  Function Name : Maximum
//  Description :   It is used to return maximum element
//  Input :         void
//  Output :        Integer
//  Auther :        Diksha Kadu Vispute
//  Date :          03/01/2026
//
///////////////////////////////////////////////////////////////////////////

        int Maximum()
        {
            int iMax = 0;
            PNODE temp = NULL;
            temp = this->first;

            while(temp != NULL)
            {
                if((temp->data) > iMax)
                {
                    iMax = temp->data;
                }
                temp = temp->next;
            }
            return iMax;            
        }
};

int main()
{
    SinglyLL sobj;
    int iRet = 0;

    sobj.InsertFirst(240);
    sobj.InsertFirst(320);
    sobj.InsertFirst(230);
    sobj.InsertFirst(110);

    iRet = sobj.Maximum();

    cout<<"The Largest elements in the linked list is : "<<iRet<<"\n";

    return 0;
}