package Inheritance;
import java.util.Scanner;

class Member {
	
	private String name;
	private int age;
	private String phone_no;
	private String address;
	private double salary;
	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getAge() {
		return age;
	}

	public void setAge(int age) {
		this.age = age;
	}

	public String getPhone_no() {
		return phone_no;
	}

	public void setPhone_no(String phone_no) {
		this.phone_no = phone_no;
	}

	public String getAddress() {
		return address;
	}

	public void setAddress(String address) {
		this.address = address;
	}

	public double getSalary() {
		return salary;
	}

	public void setSalary(double salary) {
		this.salary = salary;
	}
	
	void printSalary() {
		System.out.println("Salary : "+ salary);
	}
	
	public static void main(String[] args) {

	    Scanner sc = new Scanner(System.in);

	    // Create object of PrimeMembers class
	    PrimeMembers member = new PrimeMembers();

	    // Taking input from console

	    System.out.print("Enter Name: ");
	    member.setName(sc.nextLine());

	    System.out.print("Enter Age: ");
	    member.setAge(sc.nextInt());
	    sc.nextLine(); // Consume newline

	    System.out.print("Enter Phone Number: ");
	    member.setPhone_no(sc.nextLine());

	    System.out.print("Enter Address: ");
	    member.setAddress(sc.nextLine());

	    System.out.print("Enter Salary: ");
	    member.setSalary(sc.nextDouble());

	    System.out.print("Enter Joining Year: ");
	    member.setJoiningYear(sc.nextInt());

	    System.out.print("Enter Joining Fees: ");
	    member.setJoiningFees(sc.nextDouble());

	    System.out.print("Is the member active? (true/false): ");
	    member.setIsActive(sc.nextBoolean());

	    // Display salary using parent method
	    System.out.println("\nCalling printSalary() method:");
	    member.printSalary();

	    // Display all details
	    member.display();

	    sc.close();
	}
}
	
class PrimeMembers extends Member{
	 
	int joiningYear;
	double joiningFees;
	boolean isActive;
	public int getJoiningYear() {
		return joiningYear;
	}
	public void setJoiningYear(int joiningYear) {
		this.joiningYear = joiningYear;
	}
	public double getJoiningFees() {
		return joiningFees;
	}
	public void setJoiningFees(double joiningFees) {
		this.joiningFees = joiningFees;
	}
	public boolean isActive() {
		return isActive;
	}
	public void setIsActive(boolean isActive) {
		this.isActive = isActive;
	}
	
	public void display() {
		System.out.println("\n----- Prime Member Details -----");
		System.out.println("Name: " + getName());
		System.out.println("Age: " + getAge());
		System.out.println("Phone Number: " + getPhone_no());
		System.out.println("Address: " + getAddress());
		System.out.println("Salary: " + getSalary());
		System.out.println("Joining Year: " + joiningYear); 
		System.out.println("Joining Fees: " + joiningFees);
		System.out.println("Active Status: " + isActive);
	}
}

