#include<iostream>
using namespace std;

template <class T>
class Demo
{
    public:

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Used to Dipslay the given Value given number of times
//  Input :         Value, Number
//  Output :        void
//  Auther :        Diksha Kadu Vispute
//  Date :          11/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

        void Display(T Val, int No)
        {
            int iCnt = 0;

            for(iCnt = 1; iCnt <= No; iCnt++)
            {
                cout<<Val<<"\t";
            }
        }
};

////////////////////////////////////////////////////////////////////////////////
//    Entry point function
////////////////////////////////////////////////////////////////////////////////

int main()
{
    Demo <char> *dobj = new Demo<char>();

    char Value = 0;
    int Number = 0;

    cout<<"Enter the Value for printing :\n";
    cin>>Value;

    cout<<"Enter number of times you want to print the value :\n";
    cin>>Number;

    dobj->Display(Value,Number);

    return 0;
}