#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Time Complexity O(N)
bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iLength = 0;
    int iCnt = 0, iValue = 0;
    bool bRet = false;
    int *Brr = NULL;

    printf("Enter Number of Element : ");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the element : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    printf("Enter the element that you want to search :\n");
    scanf("%d",&iValue);

    bRet = LinearSearch(Brr, iLength,iValue);

    if(bRet == true)
    {
        printf("Element is Present");
    }
    else
    {
        printf("Element is Not present");
    }

    free(Brr);

    return 0;
}