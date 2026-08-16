#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOl;

BOOl CheckEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOl bRet = FALSE;
    printf("Enter Number ");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == TRUE)
    {
        printf("The Numbe is Even");
    }
    else
    {
        printf("The Number is ODd");
    }
}