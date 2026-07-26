#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    private:
        int *Arr;
        int iSize;
        int iCnt = 0;

        public:
        // Paramterise Constructor with default argument
        ArrayX(int X = 5)      
        {
            iSize = X;                       
            Arr = new int[iSize];         
        }

        ~ArrayX()
        {
            delete[] Arr;                   
        }

        void Accept()
        {
            cout<<"Enter The Element : \n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

         void Display()
        {
            cout<<"Element of The Array are : \n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }

        int Summation()
        {
            int iCnt = 0, isum = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                isum = isum + Arr[iCnt];
            }
            return isum;
        }

};

int main()
{

    ArrayX *aobj = NULL;
    int iLength = 0, iRet = 0;

    cout<<"Enter the number of elements : \n";
    cin>>iLength;

    aobj = new ArrayX(iLength);

    aobj ->Accept();
    aobj ->Display();

    iRet = aobj ->Summation();

    cout<<"Summation is : "<<iRet<<endl;

    delete aobj;

    return 0;
}