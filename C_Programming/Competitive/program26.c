#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Number is Small");
    }
    else if(iNo < 100)
    {
        printf("Number is Medium");
    }
    else
    {
        printf("Number is Large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter A Number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}