#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        // Default Constructor
        ArrayX()
        {

        }
        
        // Parameterise Constructor
        ArrayX(int X)
        {

        }
};

int main()
{
    ArrayX aobj1;               // Default 
    ArrayX aobj2(5);            // Parameterise

    cout<<sizeof(aobj1)<<endl;           // 16

    return 0;
}