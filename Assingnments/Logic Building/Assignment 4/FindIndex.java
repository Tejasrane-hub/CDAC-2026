import java.util.Scanner;
import java.util.Arrays;

public class FindIndex {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int[] arr = new int[5];

        System.out.println("Enter 5 integers:");

        for (int i = 0; i < 5; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.print("Enter the number to search: ");
        int number = sc.nextInt();

        Arrays.sort(arr);

        int index = Arrays.binarySearch(arr, number);

        if (index >= 0) {
            System.out.println("Index: " + index);
        } else {
            System.out.println("Not Found");
        }

        sc.close();
    }
}