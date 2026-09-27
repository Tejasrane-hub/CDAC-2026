package Arrays;
import java.util.*;

public class AverageValueOfArray {
	
	public static void main(String args[]) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter The Size Of An Array : ");
		int n = sc.nextInt();
		
		int[] arr = new int[n];
		
		System.out.println("Enter The "+ n + " Elements : ");		
		for(int i = 0; i < n; i++) {
			arr[i] = sc.nextInt();
		}
		
		int sum = 0;
		
		for(int i = 0; i < n; i++) {
			sum = sum + arr[i];					
		}
		
		double avg = sum / n;
		
		System.out.println("Average Value Of An Array Elements : " + avg);
		
		sc.close();		
		
	}
}
