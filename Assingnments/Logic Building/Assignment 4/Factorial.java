import java.util.Scanner;
public class Factorial
{
	static void factorialNumber()
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter The Number : ");
		int n = sc.nextInt();
		int ans = 1;
		
		for(int i=1;i<=n; i++)
		{
			ans = ans * i;
		}
		System.out.print("Factorial Of "+n+ " is "+ans);
	}
	public static void main(String args[])
	{
		factorialNumber();
	}
}