/*
    START
        Accept number as No
        if No is completely divisible by 2
            then print Even
        otherwise
            print odd
    STOP 
    
    
    START
        Accept number as No
        divide No by 2
        If remainder is 0 
            then print as Even
        otherwise
            print as odd
        STOP
*/

#include<stdio.h>

int main()
{
    int iValue = 0;
    int iRemainder = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRemainder = iValue % 2;

    if(iRemainder == 0)
    {
        printf("The Number is Even\n");
    }
    else
    {
        printf("The Number is Odd\n");
    }

    return 0;