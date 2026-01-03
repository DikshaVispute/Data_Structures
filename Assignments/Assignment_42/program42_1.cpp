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
//  Function Name : SearchFirstOcc
//  Description :   It is used to return first occurance of an element
//  Input :         Integer
//  Output :        Integer
//  Auther :        Diksha Kadu Vispute
//  Date :          03/01/2026
//
///////////////////////////////////////////////////////////////////////////

        int SearchFirstOcc(int no)
        {
            PNODE temp = NULL;
            temp = this->first;
            int pos = 0;

            pos = 1;
            while(temp != NULL)
            {   
                if(temp->data == 30)
                {
                    return pos;
                }

                temp = temp->next;
                pos++;
            }

            return pos;            
        }
};

int main()
{
    SinglyLL sobj;
    int iRet = 0;

    sobj.InsertFirst(70);
    sobj.InsertFirst(30);
    sobj.InsertFirst(50);
    sobj.InsertFirst(40);
    sobj.InsertFirst(30);
    sobj.InsertFirst(20);
    sobj.InsertFirst(10);

    iRet = sobj.SearchFirstOcc(30);

    cout<<"Position of First Occurance of 30 is : "<<iRet<<"\n";

    return 0;
}