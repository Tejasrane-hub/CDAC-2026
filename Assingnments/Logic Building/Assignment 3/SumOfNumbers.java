import java.util.Scanner;
public class SumOfNumbers
{
	static Scanner sc = new Scanner(System.in);
	static void calculateSum()
	{
		System.out.println("Enter The Number : ");
		int n = sc.nextInt();
		int a = 0;
				
		for(int i=1; i<=n; i++)
		{
			a = i + a;
		}
		System.out.println("The Sum Of The Number From 1 to "+ n +" is : "+ a);
	}
	public static void main(String args[])
	{
		calculateSum();
	}
}