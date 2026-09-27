package Arrays;

import java.util.Scanner;

public class DuplicateValueOfArray {
	
	public static void main(String args[]){
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter The Size Of Array : ");
		int n = sc.nextInt();
		
		int[] arr = new int[n];
		
		System.out.println("Enter The Array Elements : ");
		
		for(int i = 0; i < n; i++) {
			arr[i] = sc.nextInt();
		}
		
		System.out.println("Duplicate Value Of An Array : ");
		
		for(int i = 0; i < n; i++) {
			for(int j = i+1; j < n; j++) {
				if(arr[i] == arr[j]) {
					System.out.println(arr[i]);
					break;
				}
			}
		}
		sc.close();
	}
}
