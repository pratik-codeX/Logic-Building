import java.util.*;
import java.time.LocalDate;
import java.io.*;

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

    public void ExportCSV()
    {
        System.out.println("---------------------------------------------------------------");
        if(Datebase.isEmpty())
        {
            System.out.println("---------------------------------------------------------------");
            System.out.println("Nothing to Export as database is empty");
            System.out.println("---------------------------------------------------------------");
            return;
        }

        String FileName = "Marvellous.csv";

       try(FileWriter Fwobj = new FileWriter(FileName))
       {
            //Write Csv header  
            Fwobj.write("Date,Subject,Duration,Description");

            for(StudyLog sobj : Datebase)
            {
                Fwobj.write(sobj.getDate()+","+
                            sobj.getSubject().replace(","," ") + ","+
                            sobj.getDuration() +","+
                            sobj.getDescription().replace(","," ") + "\n"
                );
            }

            System.out.println("Log created Succesfully");
       }
       catch(Exception eobj)
       {
            System.out.println("Exception occured while creating the CSV.");
            System.out.println("Report this issue to Marvellous Infosystems");
       }
    }

    public void SummaryByDate()
    {
        System.out.println("---------------------------------------------------------------");
        if(Datebase.isEmpty())
        {
            System.out.println("Nothing to Display as database is empty");
            System.out.println("---------------------------------------------------------------");
            return;
        }

        System.out.println("---------------------------------------------------------------");
        System.out.println("---------Summary by date from Marvellous Study Tracker---------");
        System.out.println("---------------------------------------------------------------");

        TreeMap<LocalDate,Double> tobj = new TreeMap<LocalDate,Double> ();

        LocalDate lobj = null;
        double d,old;

        for(StudyLog sobj : Datebase)
        {
            lobj = sobj.getDate();
            d = sobj.getDuration();

            if(tobj.containsKey(lobj))
            {
                old = tobj.get(lobj);
                tobj.put(lobj,d+old);
            }   
            else
            {
                tobj.put(lobj,d);
            }    
        }

        //Display the details as per date
        for(LocalDate ldobj : tobj.keySet())
        {
            System.out.println("Date : "+ldobj+"Total Study : "+tobj.get(ldobj));
        }

        System.out.println("---------------------------------------------------------------");

    }
}//Display by date future enhan

class program557  //StudyTrackerStarter
{
    public static void main(String A[])
    {
        StudyTracker stobj = new StudyTracker();
        int iChoice = 0;

        Scanner ScannersObj = new Scanner(System.in);
        System.out.println("---------------------------------------------------------------");
        System.out.println("Welcome to Marvellous StudyTracker Application");
        System.out.println("---------------------------------------------------------------");

       do
       {
            System.out.println("Please select the appropriate option");
            System.out.println(" 1 : Insert new Study Log into Database ");
            System.out.println(" 2 : View All study Logs");
            System.out.println(" 3 : Summary of study Log by Date ");
            System.out.println(" 4 : Summary of Study Log by Subject ");
            System.out.println(" 5 : Export Study Log to CSV file");
            System.out.println(" 6 : Exit the Application ");

            iChoice = ScannersObj.nextInt();

            switch(iChoice)
            {
                case 1 :        //Insert new Study Log into Database

                    stobj.InsertLog();
                    break;
                
                case 2 :        //View All study Logs"
                    stobj.DisplayLog();
                    break;
                
                case 3 :        //Summary of study Log by Date
                    stobj.SummaryByDate();
                    break;
                    
                case 4 :        //Summary of Study Log by Subject
                    
                    break;
                
                case 5 :        //Export Study Log to CSV file
                    stobj.ExportCSV();
                    break;
                
                case 6 :        //Exit the Application 
                    System.out.println("---------------------------------------------------------------");
                    System.out.println("Thank you for using marvellous Study Log Application");
                    System.out.println("---------------------------------------------------------------");
                    break;
                
                default:
                    System.out.println("Please Enter valid Option");
            }
       }while(iChoice != 6);

    }
}