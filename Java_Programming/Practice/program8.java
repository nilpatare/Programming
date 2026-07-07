import java.util.Scanner;

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name : Arithmatic
//  Description : Class containing arithmetic methods.
//
/////////////////////////////////////////////////////////////////////////////////////////////

class Arithmatic
{
    /////////////////////////////////////////////////////////////////////////////////
    //
    //  Method Name : AddTwoNumber
    //  Input :       int, int
    //  Output :      int
    //  Description : Performs Addition of Two Integers
    //  Author :      Nil Sanjay Patare
    //
    /////////////////////////////////////////////////////////////////////////////////

    public static int AddTwoNumber
    (
        int iNo1,      // First Input
        int iNo2       // Second Input
    )
    {
        int iResult = 0;                   // Variable to Store Result

        iResult = iNo1 + iNo2;             // Perform Addition

        return iResult;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name : program6
//  Description : Main class of the application.
//
/////////////////////////////////////////////////////////////////////////////////////////////

class program8
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        // Variable Creation with default values
        int iValue1 = 0;       // To Store First Input
        int iValue2 = 0;       // To Store Second Input
        int iResult = 0;       // To Store Result

        System.out.print("Enter First Number : ");
        iValue1 = sobj.nextInt();

        System.out.print("Enter Second Number : ");
        iValue2 = sobj.nextInt();

        iResult = Arithmatic.AddTwoNumber(iValue1, iValue2);

        System.out.println("Addition is : " + iResult);

        sobj.close();
    }
}

/*
    Input  : 10 11
    Output : 21
*/