import java.util.Scanner;
public class PositiveNumber
{
	static Scanner sc = new Scanner(System.in);
	
	static int askForPositiveNumber()
	{
		int num;
		do 
		{
			System.out.println("Enter A Postitve Number : ");
			num = sc.nextInt();
		}
		while(num <= 0);
		System.out.println("You Entered A Poitive Number : " +num);
		return num;
	}
	public static void main(String args[])
	{
		
		askForPositiveNumber();
		
	}
}
