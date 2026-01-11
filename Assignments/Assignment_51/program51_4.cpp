#include<iostream>
using namespace std;

template <class T>
class Demo
{
    public:

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SearchLast
//  Description :   Used to return Last Occurance of the elemet
//  Input :         Array, Size of array, value to count frequency
//  Output :        Last occurance
//  Auther :        Diksha Kadu Vispute
//  Date :          11/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

        int SearchLast(T Brr[], int iSize, T Val)
        {
            int iCnt = 0, iPos = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Brr[iCnt] == Val)
                {
                    iPos = iCnt+1;
                }
            }

            return iPos;
        }
};

////////////////////////////////////////////////////////////////////////////////
//    Entry point function
////////////////////////////////////////////////////////////////////////////////

int main()
{
    Demo <char> *dobj = new Demo<char>();
    int iLength = 0, iCnt = 0;
    int iRet = 0;
    char Value = '\0';

    cout<<"Enter  the number of elements :\n";
    cin>> iLength;

    cout<<"Enter  the value to search :\n";
    cin>> Value;

    char *Arr = new char[iLength];

    cout<<"Enter the elements: \n";

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    
    iRet = dobj->SearchLast(Arr, iLength, Value);

    cout<<"Last occurance of the element is : "<<iRet<<"\n";

    delete[] Arr;

    return 0;
}