#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int iLength = 0;
    int iCnt = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter Number of Element : ");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the element : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Summation(Brr, iLength);

    printf("Summation is : %d",iRet);

    free(Brr);

    return 0;
}