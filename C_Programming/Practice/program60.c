#include<stdio.h>

void CallByValue(int iNo)
{
    iNo++;
}

int main()
{    
    int ivalue = 11;
    
    CallByValue(ivalue);

    printf("Value After fucntion call : %d\n",ivalue);

    return 0;
}