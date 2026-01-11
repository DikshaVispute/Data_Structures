#include<iostream>
using namespace std;

template <class T>
class Demo
{
    public:

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CopyArray
//  Description :   Used to return Minimum of all the elements
//  Input :         source array, Size of array, destination array
//  Output :        void
//  Auther :        Diksha Kadu Vispute
//  Date :          11/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

        void CopyArray(T Src[], int iSize, T Dest[])
        {
            int iCnt = 0;

            for(iCnt = 0; iCnt <iSize; iCnt++)
            {
                Dest[iCnt] = Src[iCnt];
                cout<<Dest[iCnt]<<"\t";
            }

        }
};

////////////////////////////////////////////////////////////////////////////////
//    Entry point function
////////////////////////////////////////////////////////////////////////////////

int main()
{
    Demo <int> *dobj = new Demo<int>();
    int iLength = 0, iCnt = 0;
    //char Value = '\0';

    cout<<"Enter  the number of elements :\n";
    cin>> iLength;

    //cout<<"Enter  the value to search :\n";
    //cin>> Value;

    int *Arr = new int[iLength];
    int *Brr = new int[iLength];

    cout<<"Enter the elements: \n";

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }

    cout<<"\n";
    
    dobj->CopyArray(Arr, iLength, Brr);

    delete[] Arr;

    return 0;
}