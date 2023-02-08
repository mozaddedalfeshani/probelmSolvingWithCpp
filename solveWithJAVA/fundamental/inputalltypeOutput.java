import java.util.Scanner;

public class inputalltypeOutput {
    public static void main(String[] args) {
        Scanner inputName = new Scanner(System.in);

        System.out.println("Enter a charecter: ");
        char char_type = inputName.next().charAt(0);
        System.out.println("Enter a String : ");
        String string_type = inputName.next();
        // input integer
        System.out.println("Enter a integer: ");
        int int_type = inputName.nextInt();
        System.out.println("Enter a float value");
        float float_type = inputName.nextFloat();

        // print all things what we get
        System.out.println("You Enter charecter: " + char_type);
        System.out.println("You Enter string: " + string_type);
        System.out.println("You Enter int: " + int_type);
        System.out.println("You Enter float: " + float_type);

        inputName.close();

    }
}