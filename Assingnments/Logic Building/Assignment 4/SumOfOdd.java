import java.util.Scanner;
public class SumOfOdd
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a Number : ");
		int n = sc.nextInt();
		int sum = 0;
		
		for(int i=1; i<=n; i++)
		{
			if(i%2!=0)
			{
				sum = sum + i;
			}
		}
		System.out.print("The Sum Of Odd Numbers From 1 To "+ n +" is : "+sum);
	}
}