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
//  Function Name : FirstOccur
//  Description :   It is used to return position of first occurance
//  Input :         int
//  Output :        int
//  Auther :        Diksha Kadu Vispute
//  Date :          03/01/2026
//
///////////////////////////////////////////////////////////////////////////

        int FirstOccur(int no)
        {
            PNODE temp = NULL;
            temp = this->first;
            int iPos = 0;

            iPos = 1;
            while(temp != NULL)
            {
                if((temp->data) == no)
                {
                    break;
                }
                
                temp = temp->next;
                iPos++;
            }

            return iPos;
        }
};

int main()
{
    SinglyLL sobj;
    int iRet = 0;

    sobj.InsertFirst(111);
    sobj.InsertFirst(11);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertFirst(21);

    iRet = sobj.FirstOccur(11);

    cout<<"position of first occurance of the number is: "<<iRet<<"\n";

    return 0;
}