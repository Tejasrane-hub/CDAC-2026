package Arrays;
import java.util.*;

public class MaxMinOfArray {
	
	public static void main(String args[]){
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter The Size Of Array : ");
		int n = sc.nextInt();
		
		int[] arr = new int[n];
		
		System.out.println("Enter The Array Elements : ");
		
		for(int i = 0; i < n; i++) {
			arr[i] = sc.nextInt();
		}
		
		int max = 0;
		int min = arr[0];
		
		for(int i = 0; i < n; i++) {
			if(arr[i] > max) {
				max = arr[i];
			}
		}
		
		for(int i = 0; i < n; i++) {
			if(arr[i] < min) {
				min = arr[i];
			}
		}
		System.out.println("Maximum Value Of An Array : " + max);
		System.out.println("Minimum Value Of An Array : " + min);
		
		sc.close();
	}
}
