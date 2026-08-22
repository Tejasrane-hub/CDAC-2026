import java.util.Scanner;
public class PrintTable
{
	static Scanner sc = new Scanner(System.in);
	static void printMultiplicationTable()
	{
		System.out.println("Enter A Number To Print Table : ");
		int n = sc.nextInt();
		for(int i=1; i<=10; i++)
		{
			int a = n * i;
			System.out.println(n + " * " + i + " = " + a);	
		}		
	}
	public static void main(String args[])
	{
		PrintTable.printMultiplicationTable();	
	}
}