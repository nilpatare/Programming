#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo * 2; iCnt++)
    {
        if(iCnt <= iNo)
        {
            printf("*\t");
        }
        else
        {
            printf("#\t");
        }
    }
   
}

int main()
{
    int iValue = 0;

    printf("Enter A Number : ");
    scanf("%d",&iValue);

    Table(iValue);
    return 0;
}