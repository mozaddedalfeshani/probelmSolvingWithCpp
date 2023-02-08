import java.util.Scanner;

public class inputAndOutput {
    public static void main(String[] args) {
        Scanner inputName = new Scanner(System.in);

        int a = inputName.nextInt();
        int b = inputName.nextInt();
        System.out.println("The first input is: " + a + " And the last input is : " + b);
        inputName.close();
    }
}