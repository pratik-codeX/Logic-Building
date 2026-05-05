import java.util.Scanner;

class program8
{
    public static void main(String A[])
    {   
        int i = 0;
        long First = 0;
        long Second = 0;
        long Next = 0;
        long Size = 0;
        

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
        sobj.close();
    }
}