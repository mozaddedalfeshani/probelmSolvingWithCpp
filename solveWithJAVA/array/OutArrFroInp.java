package solveWithJAVA.array;

import java.util.*;

public class OutArrFroInp {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        // starting point
        System.out.println("Input Size: ");
        int n = input.nextInt();
        // declare array
        int[] array = new int[n];
        for (int i = 0; i < n; i++) {
            array[i] = input.nextInt();

        }
        for (int i = 0; i < n; i++) {
            System.out.println(array[i]);

        }

        input.close();

    }

}
