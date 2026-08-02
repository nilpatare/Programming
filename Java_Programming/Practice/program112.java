/*
        iRow = 6
        iCOl = 6

        a
        a   b
        a   b   c
        a   b   c   d

*/


import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0 , j = 0;
        char ch ='\0';

        // filter for diagonal pattern 
        if(iRow != iCol)
            {
                System.out.println("Invalid Parameters");
                System.out.println("Number of rows and columns should be same");
                return ;
            }

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1 , ch = 'a'; j <= i; j++, ch++)
            { 
                System.out.print(ch +"\t");
            }
            
            System.out.println("");
            System.out.println("");
            System.out.println("");
        }
    }
}

class program112
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter Number of Rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter Number of Column : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);

    }
}