import java.util.Scanner;

public class ArraySum {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int[] arr = new int[5];
        int sum = 0;

        System.out.println("Enter 5 integers:");

        // Taking input
        for (int i = 0; i < 5; i++) {
            arr[i] = sc.nextInt();
        }

        // Calculating sum using for-each loop
        for (int num : arr) {
            sum = sum + num;
        }

        System.out.println("The sum of all numbers is: " + sum);

        sc.close();
    }
}