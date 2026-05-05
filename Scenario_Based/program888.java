import java.util.*;

class Student
{
    public String name;
    public int marks;

    public Student(String a, int b)
    {
        this.name = a;
        this.marks = b;
    }

    @Override
    public String toString()
    {
        return this.name + ": "+ this.marks;
    }
}

class program888
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
                    //reference of student
        ArrayList <Student>aobj = new ArrayList<Student>(); //It is combination of linkedlist and array

        Student s1 = new Student("Sagar", 90);
        Student s2 = new Student("Rahul", 80);
        Student s3 = new Student("Pooja", 92);
        Student s4 = new Student("Amit", 72);

        aobj.add(s1);
        aobj.add(s2);
        aobj.add(s3);
        aobj.add(s4);

        for(Student s : aobj)
        {
            System.out.println(s);
        }

        aobj.clear();
 
        sobj.close();
    }
}