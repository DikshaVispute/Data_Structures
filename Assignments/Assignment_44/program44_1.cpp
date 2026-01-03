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
//  Function Name : Search
//  Description :   It is used to check whether number is present or not
//  Input :         Integer
//  Output :        Boolean
//  Auther :        Diksha Kadu Vispute
//  Date :          03/01/2026
//
///////////////////////////////////////////////////////////////////////////

        bool Search(int no)
        {
            PNODE temp = NULL;
            temp = this->first;

            while(temp != NULL)
            {
                if(temp->data == no)
                {
                    return true;
                }
                else
                {
                    return false;
                }

                temp = temp->next;
            }
        }
};

int main()
{
    SinglyLL sobj;
    bool bRet = 0;

    sobj.InsertFirst(111);
    sobj.InsertFirst(101);
    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    bRet = sobj.Search(21);

    if(bRet == true)
    {
        cout<<"the number is present\n";
    }
    else
    {
        cout<<"the number not is present\n";
    }

    return 0;
}