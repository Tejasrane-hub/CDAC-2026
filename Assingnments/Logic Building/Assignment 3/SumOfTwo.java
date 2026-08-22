import java.util.Scanner;
public class SumOfTwo
{
	static int Sum(int n1,int n2)
	{
		int ans = n1 + n2;
		System.out.println("Sum Of " + n1 + " And " + n2 + " is : "+ans);
		return ans;
		
	}	
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter First Number : ");
		int n1 = sc.nextInt();
		
		System.out.println("Enter Second Number : ");
		int n2 = sc.nextInt();
		
		SumOfTwo.Sum(n1,n2);
		sc.close();
		
	}
}
