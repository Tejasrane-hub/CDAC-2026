package Classes;

public class Student {
	
	String name;
	int roll_no;
	String phone_no;
	String address;
	
	public static void main(String args[]) {
		
		// A
		Student student1 = new Student();
		student1.name = "john";
		student1.roll_no = 2;
		
		System.out.println(student1.name);
		System.out.println(student1.roll_no);
		
		//B
		Student Sam = new Student();
		Sam.name = "Sam";
		Sam.roll_no = 1;
		Sam.phone_no = "8485848584";
		Sam.address = "Mumbai";
		
		Student John = new Student();
		John.name = "John";
		John.roll_no = 2;
		John.phone_no = "9495949594";
		John.address = "Jalgaon";
		
		System.out.println("\nStudent 1:"); 
		System.out.println("Name: " + Sam.name); 
		System.out.println("Roll No: " + Sam.roll_no); 
		System.out.println("Phone No: " + Sam.phone_no); 
		System.out.println("Address: " + Sam.address); 
		
		System.out.println("\nStudent 2:"); 
		System.out.println("Name: " + John.name); 
		System.out.println("Roll No: " + John.roll_no); 
		System.out.println("Phone No: " + John.phone_no); 
		System.out.println("Address: " + John.address);
		
	}
	

}
