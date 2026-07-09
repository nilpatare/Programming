// Type 2

import java.util.Scanner;

class program16
{
   static  void CheckDivisible(int iNo)
    {
         if((iNo % 3 == 0) && (iNo % 5 == 0))
        {
            System.out.println("Number is divisble by 3 & 5");
        }
        else
        {
            System.out.println("Number is not divisible by 3 & 5");
        }
    }

    public static void main(String A[]) 
    {
        int iValue = 0;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        CheckDivisible(iValue);
    }
}