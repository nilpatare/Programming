#include<stdio.h>

void CallByAddress(int *iPtr)
{
    (*iPtr)++;
}

int main()
{    
    int ivalue = 11;
    
    CallByAddress(&ivalue);

    printf("Value After fucntion call : %d\n",ivalue);

    return 0;
}