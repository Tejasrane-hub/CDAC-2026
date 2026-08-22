import java.util.Scanner;
import java.util.Arrays;

public class LargestElement {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int[] arr = new int[5];

        System.out.println("Enter 5 integers:");

        // Taking input
        for (int i = 0; i < 5; i++) {
            arr[i] = sc.nextInt();
        }

        // Sorting the array
        Arrays.sort(arr);

        // Last element is the largest
        int largest = arr[arr.length - 1];

        System.out.println("The largest element is: " + largest);

        sc.close();
    }
}