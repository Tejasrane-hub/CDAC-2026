package Arrays;
import java.util.*;
public class CopyArray {
	public static void main(String args[]) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter The Size Of An Array : ");
		int n = sc.nextInt();
		
		int[] arr1 = new int[n];
		int[] arr2 = new int[n];
		
		System.out.println("Enter The Array Elements : ");		
		for(int i = 0; i < n; i++) {
			arr1[i] = sc.nextInt();
		}
		
		for(int i = 0; i < n; i++) {
			arr2[i] = arr1[i];
		}
		
		System.out.println("Original Array : ");
		for(int i = 0; i < n; i++) {
			System.out.print(arr1[i] + " ");
		}
		
		System.out.println("\nCopied Array : ");
		for(int i = 0; i < n; i++) {
			System.out.print(arr2[i] + " ");
		}
		sc.close();		
	}

}
