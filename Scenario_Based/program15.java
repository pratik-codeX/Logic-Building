import java.util.Scanner;

class program15
{
    public static void main(String A[])
    {   
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of rows in Theatre :");
        System.out.println("Enter the Number of Columns in Theatre :");


        int R = sobj.nextInt();
        int C = sobj.nextInt();

        if(R <= 0 || C <= 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        int i = 0;
        int j = 0;

        int Seats[][] = new int[R][C];

        System.out.println("Enter Booking Details (0/1)");

        for(i = 0; i < R; i++)
        {
            System.out.println("Enter Details of Row "+(i + 1));

            for(j = 0; j < C; j++)
            {
                Seats[i][j] = sobj.nextInt();

                if((Seats[i][j] != 0) && (Seats[i][j] != 1))
                {
                    System.out.println("Invlid Input");
                    return;
                }
            }
        }

     
        sobj.close();
    }
}