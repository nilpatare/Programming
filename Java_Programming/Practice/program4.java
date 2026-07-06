/*
    Algorithm

    START
        Accept First Number as No1
        Accept Second Number as No2
        Perform Addition of No1 & No2
        Display The Result

    STOP
*/

import java.util.Scanner;

class program4
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

        iResult = iValue1 + iValue2;

        System.out.println("Addition is : " + iResult);

        sobj.close();
    }
}