/*
    Algorithm

    START
        Accept First Number as No1
        Accept Second Number as No2
        Perform Addition of No1 & No2
        Display The Result

    STOP
*/

#include<iostream>
using namespace std;

int main()
{
    // Variable Creation with default values
    float i = 0.0f,j = 0.0f,k = 0.0f;

    cout<<"Enter First Number : ";
    cin>>i;

    cout<<"Enter Second Number : ";
    cin>>j;

    k = i + j;

    cout<<"Addition is : "<<k;
    
    return 0;
}