import java.util.Scanner;
class program52
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter your name:");
        String Name = sobj.nextLine();

        System.out.println("Enter your age ");
        int Age = sobj.nextInt();

        System.out.println("Enter your marks :");
        float Marks = sobj.nextFloat();

        System.out.println("Name :"+Name);
        System.out.println("Age :"+Age);
        System.out.println("Marks :"+Marks);
    }   
}