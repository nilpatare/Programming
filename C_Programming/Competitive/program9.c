#include<stdio.h>
void Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    // Write Updater
    for(iCnt = 0; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number ");
    scanf("%d",&iValue);

    printf("Enter Frequncy");
    scnaf("%d",&iCount);

    Display(iValue, iCount);

    return 0;
}