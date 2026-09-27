package Arrays;
import java.util.*;

public class SumArray {
	public static void main(String args[]) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter The Size Of Array : ");
		int n = sc.nextInt();
		
		int[] arr = new int[n];
		
		System.out.println("Enter The Array Elements : ");		
		for(int i = 0; i < n; i++) {
			arr[i] = sc.nextInt();
		}
		
		int sum = 0;
		
		for(int i = 0; i < n; i++) {
			sum = sum + arr[i];
		}
		
		System.out.println("Sum Of The Value Of An Array : " + sum);
		
		sc.close();
		
		
		
		
		
	}
}
