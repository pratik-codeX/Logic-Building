import java.util.*;

class StudyLog
{
    public String Subject;
    public double Duration;
    public String Description;

    public StudyLog(String A,double B, String C)
    {
        this.Subject = A;
        this.Duration = B;
        this.Description = C;
    }

    public void Display()
    {
        System.out.println(Subject+" | "+Duration+" | "+Description);
    }
}

class program543
{
    public static void main(String A[])
    {
        StudyLog sobj1 = new StudyLog("C",2.5,"Pointer and Array");
        StudyLog sobj2 = new StudyLog("C++",2,"Polymorphism");
        StudyLog sobj3 = new StudyLog("Java",3.5,"Polymorphism");

        sobj1.Display();
        sobj2.Display();
        sobj3.Display();
    }
}