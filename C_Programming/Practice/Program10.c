#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRemainder = 0;
   
    iRemainder = iNo % 2;

    if(iRemainder == 0)
    {
        printf("The Number is Even\n");
    }
    else
    {
        printf("The Number is Odd\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}