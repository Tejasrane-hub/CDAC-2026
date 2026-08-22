import java.util.Scanner;
public class AgeCheaker
{
	static String checkAgeCategory(int age)
	{
		String a = (age>=60) ? "Senior Citizen" : (age>=18) ? "Adult" : (age<18) ? "Minor" : "Age Is Invalid";
		
		
		return a;
	}
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter Your Age : ");
		int age = sc.nextInt();
		System.out.println(AgeCheaker.checkAgeCategory(age));
		sc.close();
	}
}