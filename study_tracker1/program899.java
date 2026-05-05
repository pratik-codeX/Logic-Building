import java.util.*;
import java.time.LocalDateTime;
import java.time.LocalDate;
import java.io.*;

class StudyLog  //Done // Model
{
    //Schema
    private LocalDate Date;
    private String Subject;
    private double Duration;
    private String Description;
    //

    public StudyLog(LocalDate a, String b, double c, String d)
    {
        this.Date = a;
        this.Subject = b;
        this.Duration = c;
        this.Description = d;
    }

    public LocalDate getDate()
    {
        return this.Date;
    }

    public String getSubject()
    {
        return this.Subject;
    }

    public double getDuration()
    {
        return this.Duration;
    }

    public String getDescription()
    {
        return this.Description;
    }

    @Override
    public String toString()
    {
        return Date+" | "+Subject+" | "+Duration+" | "+Description;
    }
}

class StudyTracker //Controller
{                                                  //reference
    public ArrayList <StudyLog>database = new ArrayList<StudyLog>();

    public void InsertLog()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("-----------------------------------------------------------");
        System.out.println("-------------Enter Valid Details of your study-------------");
        System.out.println("-----------------------------------------------------------");

        LocalDate Dateobj = LocalDate.now();

        System.out.println("Please Enter the Name of the Subject like C/C++/Java/Python");
        String sub = sobj.nextLine();

        System.out.println("Enter the time period of your study in hours");
        Double dur = sobj.nextDouble();

        sobj.nextLine();

        System.out.println("Please provide the Description of your study");
        String desc = sobj.nextLine();

        StudyLog studyobj = new StudyLog(Dateobj, sub, dur, desc);

        database.add(studyobj);

        System.out.println("-----------------------------------------------------------");
        System.out.println("-------------StudyLog gets inserted succesfully------------");
        System.out.println("-----------------------------------------------------------");

    }

    public void DisplayLog()
    {
        System.out.println("-----------------------------------------------------------");
        if(database.isEmpty())
        {
            System.out.println("----------------Nothing to Display---------------------");
            System.out.println("-------------------------------------------------------");
            return;
        }
        System.out.println("----------Log Report of Marvellous Study Tracker-----------");
        System.out.println("-----------------------------------------------------------");

        for(StudyLog s : database)
        {
            System.out.println(s);
        }

        System.out.println("-----------------------------------------------------------");
    }

    public void ExportCSV()
    {
        System.out.println("-----------------------------------------------------------");
        if(database.isEmpty())
        {
            System.out.println("----------------Nothing to Display---------------------");
            System.out.println("-------------------------------------------------------");
            return;
        }  

        String Filename = "MarvellousStudyTracker.csv";

        try(FileWriter fwobj = new FileWriter(Filename))
        {
            fwobj.write("Date,Subject,Duration,Desctiption\n");

            for(StudyLog s : database)
            {
                fwobj.write(s.getDate()+","+
                            s.getSubject().replace(",", " ")+","+
                            s.getDuration()+","+
                            s.getDescription().replace(",", " ")+"\n");
            }

            System.out.println("Data gets exported in CSV"+ Filename);
        }
        catch(Exception eobj)
        {
            System.out.println("Exception occured in CSV handling");
        }
    }
}
class program898   //view  Menu
{
    public static void main(String A[])
    {
        StudyTracker stobj = new StudyTracker();

        stobj.InsertLog();
        stobj.DisplayLog();
        stobj.ExportCSV();
    }
}