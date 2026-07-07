import java.util.Scanner;

// Class containing arithmetic methods.
class Arithmatic
{
    public static int AddTwoNumber(int iNo1, int iNo2)
    {
        int iResult = 0;

        iResult = iNo1 + iNo2;
    
        return iResult;
    }
}

// Main class of the application.
class program6
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        // Variable Creation with default values
        int iValue1 = 0;
        int iValue2 = 0;
        int iResult = 0;

        System.out.println("Enter First Number : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter Second Number : ");
        iValue2 = sobj.nextInt();

        iResult = Arithmatic.AddTwoNumber(iValue1,iValue2);

        System.out.println("Addition is : " + iResult);

        sobj.close();

    }
}