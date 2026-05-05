import java.util.Scanner;

class program17
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

        int TotalBooked = 0;
        int MaxBookedInRow = 0;
        int RowWithMax = 0;
        int RowBooked = 0;
        boolean FullRowExist = false;


        for(i = 0; i < R; i++)
        {
            RowBooked = 0;
            for(j = 0; j < C; j++)
            {
                if(Seats[i][j] == 1)
                {
                    TotalBooked++;
                }

                RowBooked = RowBooked + Seats[i][j];
            }

            if(RowBooked > MaxBookedInRow)
            {
                MaxBookedInRow = RowBooked;
                RowWithMax = i;
            }

            if(RowBooked == C)
            {
                FullRowExist = true;
            }
        }

        System.out.println("Total Booked Seats : "+TotalBooked);
        System.out.println("Row with Maximum Bookings :"+(RowWithMax+1));
        System.out.println("Full Row Exist : "+(FullRowExist ? "Yes" : "No")); //Ternari operator replacement of if-else
     
        sobj.close();
    }
}