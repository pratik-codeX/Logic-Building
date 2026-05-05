import java.util.*;
import java.time.LocalDate;

//DONE
class StudyLog  
{
     public LocalDate Date;
    public String Subject;
    public double Duration;
    public String Description;

    public StudyLog(LocalDate A,String B,double C, String D)
    {
        this.Date = A;
        this.Subject = B;
        this.Duration = C;
        this.Description = D;
    }

    @Override   
    public String toString()
    {
        return Date+" | "+Subject+" | "+Duration+" | "+Description;
    }
    
    public LocalDate getDate()
    {
        return Date;
    }

    public String getSubject()
    {
        return Subject;
    }

    public double getDuration()
    {
        return Duration;
    }

    public String getDescription()
    {
        return Description;
    }
}

class StudyTracker
{
    //Datastructure to hold the data about study
    private ArrayList<StudyLog> Datebase = new ArrayList<StudyLog>();

    public void InsertLog()
    {
        Scanner Scannerobj = new Scanner(System.in);
        System.out.println("---------------------------------------------------------------");
        System.out.println("----------Please Enter the valid Details of your Study---------");        
        System.out.println("---------------------------------------------------------------");

        LocalDate DateObj = LocalDate.now();

        System.out.println("Please provide the name of subject like C/C++/Java/OS/DS");
        String sub = Scannerobj.nextLine();

        System.out.println("Entet the time period if your study in hours");
        double dur = Scannerobj.nextDouble();
        Scannerobj.nextLine();    //Flushing of enter 

        System.out.println("Please provide the description about the study for future reference");
        String desc = Scannerobj.nextLine();

        StudyLog StudyObj = new StudyLog(DateObj,sub,dur,desc); 

        Datebase.add(StudyObj);

        System.out.println("StudyLog gets Stored succesfully...");
        System.out.println("---------------------------------------------------------------");
    }

    public void DisplayLog()
    {
        System.out.println("---------------------------------------------------------------");
        if(Datebase.isEmpty())
        {
            System.out.println("Nothing to Display as database is empty");
            System.out.println("---------------------------------------------------------------");
            return;
        }

        System.out.println("---------------------------------------------------------------");
        System.out.println("Log report from Marvellous Study Tracker");

        for(StudyLog sobj : Datebase)
        {
            System.out.println(sobj);
        }

        System.out.println("---------------------------------------------------------------");

    }
}

class program554    //StudyTrackerStarter
{
    public static void main(String A[])
    {
        StudyTracker stobj = new StudyTracker();

        stobj.DisplayLog();
        stobj.InsertLog();
        stobj.InsertLog();
        stobj.InsertLog();

        stobj.DisplayLog();
    }
}