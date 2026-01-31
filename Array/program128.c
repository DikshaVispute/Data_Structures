#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
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

    iRet = Summation(ptr,iLength);

    printf("Adddition is : %d\n",iRet);

    free(ptr);
    
    return 0;
}