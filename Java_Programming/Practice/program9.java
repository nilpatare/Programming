import java.util.Scanner;

class program9
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iRemainder = 0;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        iRemainder = iValue % 2;

        if(iRemainder == 0)
        {
            System.out.println("Number Is Even");
        }
        else
        {
            System.out.println("Number Is Odd");
        }
    }
}