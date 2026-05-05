import java.util.Scanner;

class program13
{
    public static void main(String A[])
    {   
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of Cities :");
        int N = sobj.nextInt();

        if(N <= 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        int Arr[][] = new int[N][7];

        int i = 0, j = 0, no = 0;

        System.out.println("Enter Electricity Consumption of each City :");

        for(i = 0; i < N; i++)
        {
            System.out.println("Enter Consumption of City :"+(i+1));

            for(j = 0; j < 7; j++)
            {
                no = sobj.nextInt();
                if(N < 0)
                {
                    System.out.println("Invalid Input");
                    return;//we can use flag here
                }

                Arr[i][j] = no;
            }
        }

        int Weekly[] = new int[7];
        int HighestCity = 0;
        int MaxWeekly = 0;

        int PeekDay = 0;
        int MaxDayTotal = 0;
        int Sum = 0;

        //weekly total + Highest Consumption

        for(i = 0; i < N; i++)
        {
            Sum = 0;
            for(j = 0; j < 7; j++)
            {
                Sum = Arr[i][j];
            }    
            Weekly[i] = Sum;
            if(Sum > MaxWeekly)
            {
                MaxWeekly = Sum;
                HighestCity = i;
            }
        }

        System.out.println("Highest Consumption : "+ HighestCity);
        System.out.println("Highest Consumption Weekly: "+ MaxWeekly);

        int DaySum = 0;
        int Day = 0;

        //Day with maximum Consumption

        for(Day = 0;Day < 7; Day++)
        {
            DaySum = 0;

            for(i = 0; i < N; i++)
            {
                DaySum = DaySum + Arr[i][Day];
            }
            if(DaySum > MaxDayTotal)
            {
                MaxDayTotal = DaySum;
                PeekDay = Day;
            }
        }

        System.out.println("Peak consumption day : "+PeekDay);
        System.out.println("Weekly consumption : ");

        for(i = 0; i < N; i++)
        {
            System.out.println("City : "+(i+1)+" : "+Weekly[i]);
        }

        //Cities more than 500 consumption
        System.out.println("Cities more than 500 consumption : ");
        for(i = 0; i < N; i++)
        {
            if(Weekly[i] > 500)
            {
                System.out.println("City : "+(i + 1));
            }
        }

        sobj.close();
    }
}