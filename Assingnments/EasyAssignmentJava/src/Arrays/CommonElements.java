package Arrays;
import java.util.*;

public class CommonElements {
	
	public static void main(String args[]) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter The Size Of First Array : ");
		int a = sc.nextInt();
		
		int[] arr1 = new int[a];
		System.out.println("Enter Elements Of First Array : ");
		for(int i = 0; i < a; i++) {
			arr1[i] = sc.nextInt();
		}
		
		System.out.println("Enter The Size Of Second Array : ");
		int b = sc.nextInt();
		
		int[] arr2 = new int[b];
		System.out.println("Enter Elements Of Second Array : ");
		for(int i = 0; i < b; i++) {
			arr2[i] = sc.nextInt();
		}
		
		
		System.out.println("Common Elements In Arrays : ");		
		for(int i = 0; i < a; i++) {
			for(int j = 0; j < b; j++) {
				if(arr1[i] == arr2[j]) {
					System.out.println(arr1[i]);
				}
			}
			sc.close();
		}
		
	}

}
