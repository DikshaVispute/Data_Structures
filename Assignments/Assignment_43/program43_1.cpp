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
//  Function Name : DisplayPerfect
//  Description :   It is used to Display perfect numbers
//  Input :         void
//  Output :        void
//  Auther :        Diksha Kadu Vispute
//  Date :          03/01/2026
//
///////////////////////////////////////////////////////////////////////////

        void DisplayPerfect()
        {
            PNODE temp = NULL;
            temp = this->first;
            int iCnt = 0, iSum= 0;

            while(temp != NULL)
            {
                iSum = 0;

                for(iCnt = 1; iCnt < temp->data; iCnt++)
                {
                    if(((temp->data) % iCnt) == 0)
                    {
                        iSum = iSum + iCnt;
                    }
                }
                if(iSum == temp->data)
                    {
                        cout<<temp->data<<"\n";
                    }

                temp = temp->next;
            }
        }
};

int main()
{
    SinglyLL sobj;

    sobj.InsertFirst(89);
    sobj.InsertFirst(6);
    sobj.InsertFirst(41);
    sobj.InsertFirst(17);
    sobj.InsertFirst(28);
    sobj.InsertFirst(11);

    sobj.DisplayPerfect();

    return 0;
}