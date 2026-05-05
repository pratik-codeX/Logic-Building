//display highest marks with its name in arraylist

import java.util.*;

class Student
{
    private String name;
    private int marks;

    public Student(String a, int b)
    {
        this.name = a;
        this.marks = b;
    }

    public String getName()
    {
        return this.name;
    }

    public int getMarks()
    {
        return this.marks;
    }



    @Override
    public String toString()
    {
        return this.name + ": "+ this.marks;
    }
}

class program890
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

        int iMax = 0;
        int iCount = 0;
        Student temp = null;

        for(Student s : aobj)
        {
            if(iMax < s.getMarks())
            {
               iMax = s.getMarks();
               temp = s;
            }
        }

        // for(int i = 0; i < aobj.lastIndexOf(aobj); i++)
        // {
        //     System.out.println(aobj.toArray(i));
        // }

        System.out.println("Highest Marks Student Details "+temp);

        aobj.clear();
 
        sobj.close();
    }
}