import java.util.*;

class ArrayX
{
   private int []Arr;
   private int iSize;
   private int iCnt;

    ArrayX()
    {
        this(5);
    }

    ArrayX(int X )
    {
        iSize = X;
        Arr = new int[iSize];
    }

    void Accept ()
    {
        System.out.println("Enter The Element : ");
        Scanner sobj = new Scanner(System.in);

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    void Display()
    {
        System.out.println("Element of the Array are : ");
        Scanner sobj = new Scanner(System.in);
        
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }

    int Summation()
    {
        int iCnt = 0, iSum = 0;

        for(iCnt = 0; iCnt< iSize; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }

}


class program57
{
    public static void main(String A[])
    {
        ArrayX aobj = null;

        int iLength = 0;
        int iRet = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of element : ");
        iLength = sobj.nextInt();

        aobj = new ArrayX(iLength);

        aobj.Accept();
        aobj.Display();

        iRet = aobj.Summation();

        System.out.println("Summation is : " + iRet);

        System.gc();
        
    }
}