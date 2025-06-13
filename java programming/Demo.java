import java.util.Scanner.*;
interface Add {
    int sum(int a, int b);
}

public class Demo 
{
    public static void main(String[] args) 
    {
        Add add = (a, b) -> a + b;
        System.out.println("Sum: " + add.sum(5, 3));
    }
}
