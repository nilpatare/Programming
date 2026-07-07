import java.util.Scanner;

// Class containing arithmetic methods.
class Arithmatic
{
    public static int AddTwoNumber
                                (
                                    int iNo1,       //First Input 
                                    int iNo2        // Second Input 
                                )
    {
        int iResult = 0;                            // Variable to store Result

        iResult = iNo1 + iNo2;                      // Perform the Addition
    
        return iResult;
    }
}

// Main class of the application.
class program7
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        // Variable Creation with default values
        int iValue1 = 0;   // To Store First Input
        int iValue2 = 0;   // To Store Second Input
        int iResult = 0;   // To Store The Result

        System.out.println("Enter First Number : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter Second Number : ");
        iValue2 = sobj.nextInt();

        iResult = Arithmatic.AddTwoNumber(iValue1,iValue2);

        System.out.println("Addition is : " + iResult);

        sobj.close();

    }
}