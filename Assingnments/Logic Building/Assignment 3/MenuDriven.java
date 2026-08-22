import java.util.Scanner;
public class MenuDriven
{
	static byte a;
	static short b;
	static int c;
	static long d;
	static float e;
	static double f;
	static char g;
	static boolean h;
	
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int choice;
		
		do{
			System.out.println("=======MENU======");
			System.out.println("1. Grade Evaluation System");
			System.out.println("2. Leap Year Check");
			System.out.println("3. Day Of The Week");
			System.out.println("4. Identify The Default Value Of Variable");
			System.out.println("5. EXIT");
		
		choice = Scanner.nextInt;
		switch(choice){
		case 1:
		int math = 80;
		int science = 85;
		int history = 90;
		
		int avg = (math+science+history)/3;
		System.out.println("Average Marks : "+avg);
		
		if(avg>=90)
		{
			System.out.println("Grade A");
		}
		else if(avg>=70 && avg<=89)
		{
			System.out.println("Grade B");
		}
		else if(avg>=50 && avg<=69)
		{
			System.out.println("Grade C");
		}
		else if(avg>=30 && avg<=49)
		{
			System.out.println("Grade D");
		}
		else
		{
			System.out.println("Fail");
		}
		break;
		
		case 2:
		int year = 2024;
		
		if(year%4==0 && year%100!=0 || year%400==0)
		{
			System.out.println(year +" Is a Leap Year");
		}
		else
		{
			System.out.println(year +" Is Not A Leap Year");
		}	
		break;
		case 3:
		System.out.println("Enter The Number To Find Day : ");
		int day = sc.nextInt();
		
		switch(day){
			case 1:
				System.out.println("Sunday");
				break;
			case 2:
				System.out.println("Monday");
				break;
			case 3:
				System.out.println("Tuesday");
				break;
			case 4:
				System.out.println("Wednesday");
				break;
			case 5:
				System.out.println("Thursday");
				break;
			case 6:
				System.out.println("Friday");
				break;
			case 7:
				System.out.println("Saturday");
				break;
			default :
				System.out.println("Invalid Day Number");
		break;
		case 4:
			System.out.println("byte :" +a);
			System.out.println("short :" +b);
			System.out.println("int :" +c);
			System.out.println("long :" +d);
			System.out.println("float :" +e);
			System.out.println("double :" +f);
			System.out.println("char :" +g);
			System.out.println("boolean :" +h);
		break;
		case 5:
		System.out.println("Exiting Program Good Bye");
		break;
		default:
		System.out.println("Invalid Choice");
		}	
	}while(choice != 5);
		Scanner.close();
	}
}
