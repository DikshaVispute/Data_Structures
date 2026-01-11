#include<iostream>
using namespace std;

template <class T>
class Demo
{
    public:

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckSorted
//  Description :   Used to check whether the array is sorted or not
//  Input :         array, Size of array
//  Output :        boolean
//  Auther :        Diksha Kadu Vispute
//  Date :          11/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

        bool CheckSorted(T Brr[], int iSize)
        {
            int iCnt = 0;

            for(iCnt = 0; iCnt <iSize-1; iCnt++)
            {
                if(Brr[iCnt] > Brr[iCnt + 1])
                {
                    return false;
                }
            }

            return true;
        }
};

////////////////////////////////////////////////////////////////////////////////
//    Entry point function
////////////////////////////////////////////////////////////////////////////////

int main()
{
    Demo <int> *dobj = new Demo<int>();
    int iLength = 0, iCnt = 0;
    bool bRet = false;
    //char Value = '\0';

    cout<<"Enter  the number of elements :\n";
    cin>> iLength;

    //cout<<"Enter  the value to search :\n";
    //cin>> Value;

    int *Arr = new int[iLength];

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
    
    bRet = dobj->CheckSorted(Arr, iLength);

    if(bRet == true)
    {
        cout<<"Array is sorted\n";
    }
    else
    {
        cout<<"Array is not sorted\n";
    }

    delete[] Arr;

    return 0;
}