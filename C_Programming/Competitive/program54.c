#include<stdio.h>

int RangeEvenSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if((iStart < 0) || (iEnd < 0) || iStart > iEnd)
    {
        return 0;
    }

    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
        iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter First Number : ");
    scanf("%d",&iValue1);

    printf("Enter Second Number : ");
    scanf("%d",&iValue2);

    iRet = RangeEvenSum(iValue1,iValue2);

    if(iRet == 0)
    {
    printf("Invalid Range \n");
    }
    else
    {
    printf("Range Sum is : %d",iRet);
    }
    return 0;
}