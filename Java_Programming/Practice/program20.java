// Type 3               This is the final code of the industrial working

import java.util.Scanner;

class NumberX 
{
    public boolean CheckDivisible(int iNo)
    {
         if((iNo % 3 == 0) && (iNo % 5 == 0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program20
{
    public static void main(String A[]) 
    {
        int iValue = 0;
        boolean bRet = false;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();

        bRet = nobj.CheckDivisible(iValue);

        if(bRet == true)
        {
            System.out.println("Number is divisible by 3 & 5");
        }
        else
        {
            System.out.println("Number is not divisible by 3 & 5 ");
        }
    }
}