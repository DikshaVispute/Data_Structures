#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        if((Arr[iCnt] % 2)== 1)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of elements :");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    
    if(NULL == ptr)      // industrial way of coding 
    {
        printf("unable to allocate memory \n");
        return -1;
    }

    printf("Enter the elements : \n");    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }    

    iRet = CountOdd(ptr,iLength);

    printf("number of odd elements are : %d\n",iRet);

    free(ptr);
    
    return 0;
}