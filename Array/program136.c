#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int FrequencyCalculate(int Arr[], int iSize,int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]) == iNo)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0, iValue = 0;
    IPTR iPtr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    // step 1 : allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the values : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    printf("Enter the number whose frequency you want : \n");
    scanf("%d",&iValue);

    // step 2 : Use the memory
    
    iRet = FrequencyCalculate(iPtr, iLength, iValue);

    printf("Frequency of %d is : %d\n ",iValue, iRet);

    // step 3 : Free the memory

    free(iPtr);

    return 0;
}