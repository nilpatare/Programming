#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 1;
    int iEven = 2;
    if(iNo <= 0)
    {
        return;
    }
    while(iCnt <= iNo)
    {
        printf("%d\t",iEven);
        iEven = iEven + 2;
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number ");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;
}