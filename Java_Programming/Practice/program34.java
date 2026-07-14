import java.util.*;

class DigitX
{
    public void DisplayDigit(int iNo)
    {
        int iDigit = 0;

        for(; iNo > 0 ; )       // for(; ;) one initialization allowed in the use the 
        {
            iDigit = iNo % 10;
            System.out.println(iDigit);
            iNo = iNo / 10;
        }
        }
    }

class program34
{
    public static void main (String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;

        System.out.println("Enter Number");
        iValue = sobj.nextInt();

        dobj.DisplayDigit(iValue);
        
        

    }
}