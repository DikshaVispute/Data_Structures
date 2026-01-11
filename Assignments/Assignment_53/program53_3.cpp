#include<iostream>
using namespace std;

template <class T>
class Demo
{
    public:

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SecondMax
//  Description :   Used to return Second Largest element from arrray
//  Input :         array, Size of array
//  Output :        second larget element
//  Auther :        Diksha Kadu Vispute
//  Date :          11/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

        T SecondMax(T Brr[], int iSize)
        {
            int iCnt = 0;
            T Max1 = 0,  Max2 = 0;

            for(iCnt = 0, Max1 = Brr[0]; iCnt <iSize; iCnt++)
            {
                if(Brr[iCnt] > Max1)
                {
                    Max1 = Brr[iCnt];
                }
            }

            for(iCnt = 0, Max2 = Brr[0]; iCnt <iSize; iCnt++)
            {
                if((Brr[iCnt] > Max2) && (Brr[iCnt] < Max1))
                {
                    Max2 = Brr[iCnt];
                }
            }

            return Max2;
        }
};

////////////////////////////////////////////////////////////////////////////////
//    Entry point function
////////////////////////////////////////////////////////////////////////////////

int main()
{
    Demo <int> *dobj = new Demo<int>();
    int iLength = 0, iCnt = 0;
    int iRet = 0;
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
    
    iRet = dobj->SecondMax(Arr, iLength);

    cout<<"Second largest elememt from the array is : "<<iRet<<"\n";

    delete[] Arr;

    return 0;
}