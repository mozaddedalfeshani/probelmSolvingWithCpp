
import java.util.Scanner;

public class arithmeticOp {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the first value: ");
        int a = input.nextInt();
        System.out.println("Enter the second value: ");
        int b = input.nextInt();

        System.out.println("Sum = " + (a + b) + "\n" +
                "Difference = " + (a - b) + "\n" +
                "Product = " + (a * b) + "\n" +
                "Quotient " + (a / b) + "\n" +
                "Modulus " + (a % b) + "\n");

        input.close();

    }
}