import java.util.*;

class Employee
{
    public int EmpID;
    public String EmpName;
    public int EmpAge;
    public String EmpAddress;
    public int EmpSalary;
  
    private static int Counter = 1;

    static      //ekdach call honar
    {
        System.out.println("Inside Static Block");
        Counter = 1;
    }

    public Employee(String b,int c,String d,int e)
    {
         System.out.println("Inside Constructor");

        this.EmpID = Counter++;
        this.EmpName= b;
        this.EmpAge = c;
        this.EmpAddress= d;
        this.EmpSalary = e;
    }
}

class program833
{
    public static void main(String A[])
    {
        Employee eobj1 = new Employee("Amit",23,"Pune",21000);
        Employee eobj2 = new Employee("Sager",23,"Pune",21000);
        Employee eobj3 = new Employee("Pooja",23,"Pune",21000);
        Employee eobj4 = new Employee("Gauri",23,"Pune",21000);


        System.out.println(eobj1.EmpID); 
        System.out.println(eobj2.EmpID); 
        System.out.println(eobj3.EmpID); 
        System.out.println(eobj4.EmpID); 
    }
}