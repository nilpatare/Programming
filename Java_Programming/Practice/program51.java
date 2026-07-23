import java.util.Scanner;

class program51
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter Number of Element : ");
        int iLength = sobj.nextInt();
 
        int Brr[] = new int[iLength];

        System.out.println("Enter The elements : ");
        for(iCnt = 0; iCnt < Brr.length;iCnt++)
        {
                Brr[iCnt] = sobj.nextInt();
        }

        System.out.println("Elements of the array are : ");
         for(iCnt = 0; iCnt < Brr.length;iCnt++)
        {
              System.out.println(Brr[iCnt]);
        }
        
    }
}