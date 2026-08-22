import java.util.Scanner;

public class ArrayElements {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int[] arr = new int[5];

        System.out.println("Enter 5 integers:");

        // Taking input
        for (int i = 0; i < 5; i++) {
            arr[i] = sc.nextInt();
        }

        // Printing elements using for-each loop
        for (int num : arr) {
            System.out.print(num + " ");
        }

        sc.close();
    }
}