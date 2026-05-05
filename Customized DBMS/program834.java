import java.util.*;

class Employee
{
    public int EmpID;
    public String EmpName;
    public int EmpAge;
    public String EmpAddress;
    public int EmpSalary;
  
    private static int Counter = 1;

    static     
    {
       
        Counter = 1;
    }

    public Employee(String b,int c,String d,int e)
    {
        this.EmpID = Counter++;
        this.EmpName= b;
        this.EmpAge = c;
        this.EmpAddress= d;
        this.EmpSalary = e;
    }

    public void DisplayInformation()
    {
        System.out.println("Emp ID : "+this.EmpID+"Name :"+EmpName+" Age :"+EmpAge+" Address :"+EmpAddress+" Salary :"+EmpSalary);
    }
}

class program834
{
    public static void main(String A[])
    {
        Employee eobj1 = new Employee("Amit",23,"Pune",21000);
        Employee eobj2 = new Employee("Sager",23,"Pune",21000);
        Employee eobj3 = new Employee("Pooja",23,"Pune",21000);
        Employee eobj4 = new Employee("Gauri",23,"Pune",21000);

        eobj1.DisplayInformation();
        eobj2.DisplayInformation();
        eobj3.DisplayInformation();
        eobj4.DisplayInformation();



 
    }
}