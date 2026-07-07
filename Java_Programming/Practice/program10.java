import java.util.Scanner;

class NumberX
{
    public static void CheckEvenOdd(int iNo)
    {
        int iRemainder = 0;

        iRemainder = iNo % 2;

        if(iRemainder == 0)
        {
            System.out.println("The Numbe is Even ");
        }
        else
        {
            System.out.println("The Numbe is Odd");
        }
    }
}

class program10
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        NumberX.CheckEvenOdd(iValue);
    }
}