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

#include<iostream>
using namespace std;

int main()
{   
    int iValue = 0;
    int iRemainder = 0;

    cout<<"Enter Number : ";
    cin>>iValue;

    iRemainder = iValue % 2;

    if(iRemainder == 0)
    {
        cout<<"The Number is Even";
    }
    else
    {
        cout<<"The Number is Odd";
    }

    return 0;
}