import java.util.Scanner;

class program9
{
    public static long Fibonacci(int N)
    {
        if(N <= 1)
        {
            return N;
        }
        
        return Fibonacci(N-1) + Fibonacci(N-2);
    }

    public static void main(String A[])
    {   
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of Elements in series :");

        int Size = sobj.nextInt();

        int i = 0;

        for(i = 0; i <= Size; i++)
        {
            System.out.print(Fibonacci(i) + " ");
        }

        System.out.println();

        sobj.close();
    }
}