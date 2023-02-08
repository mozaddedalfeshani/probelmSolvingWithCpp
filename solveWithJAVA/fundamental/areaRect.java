import java.util.Scanner;

public class areaRect {
    public static void main(String[] args) {
        Scanner inputName = new Scanner(System.in);
        // starting point
        float area, a, b;
        System.out.println("Enter the length: ");
        a = inputName.nextFloat();
        System.out.println("Enter the width");
        b = inputName.nextFloat();
        area = a * b;
        System.out.println("Area of rectangle = " + area + " sq. units");
        inputName.close();
    }
}