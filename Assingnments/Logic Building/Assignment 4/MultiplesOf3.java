import java.util.Scanner;
public class MultiplesOf3
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a Number : ");
		int n = sc.nextInt();
		
		for(int i=1; i<=n; i++)
		{
			if(i % 3 == 0)
			{
				System.out.print(i+ " ");
			}
		}
	}
}