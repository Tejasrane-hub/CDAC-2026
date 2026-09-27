package Arrays;
import java.util.*;

public class SortArray {
	
	public static void main(String args[]) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter The Size Of Array : ");
		int n = sc.nextInt();
		
		int[] arr = new int[n];
		
		System.out.println("Enter The " + n + " Elements : ");		
		for(int i = 0; i < n; i++) {
			arr[i] = sc.nextInt();			
		}
		
		for(int i = 0; i < n-1; i++) {
			for(int j = 0; j < n-1; j++) {
				if(arr[j] > arr[j+1]) {
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
		System.out.println("Sorted Array : ");
		for(int i = 0; i < n; i++) {
			System.out.println(arr[i]);
		}
		sc.close();
	}
}
