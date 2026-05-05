// 0    1   1   2   3   5   8   13  21....

/**
 * Algo:
 * start from           
 *                      0     
 *                      1 
 *              0 + 1 = 1
 *              1 + 1 = 2
 *              1 + 2 = 3
 *  Start + next = Fibo;
 *  next + Fibo = Fibo;
 * 
 * Windowing Pattern algorithm
 *  
 */

import java.util.Scanner;

class program7
{
    public static void main(String A[])
    {   
        int First = 0;
        int Second = 0;
        int Next = 0;
        int Size = 0;
        int i = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of Elements in series : ");
        Size = sobj.nextInt();
        
        for(i = 1, First = 0,Second = 1; i < Size; i++)
        {
            System.out.println(First+" ");

            Next = First + Second;

            First = Second;
            Second = Next;
        }

        System.out.println();
    }
}