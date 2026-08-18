#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iSum = 1;   

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
       iSum = iSum * iCnt;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter A Number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Addition is : %d",iRet);

    return 0;
}