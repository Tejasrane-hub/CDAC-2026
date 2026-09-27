package Classes;

public class Employee1 {
	String name;
	int yearOfjoining;
	double salary;
	String address;
	
	Employee1(String n,int y,double s,String a){
		name = n;
		yearOfjoining = y;
		salary = s;
		address = a;
	}
	
	void display() {
		System.out.println(name + "\t\t" + yearOfjoining + "\t\t" + salary + "\t\t" + address);
	}
	
	public static void main(String args[]) {
		Employee1 robert = new Employee1("Robert",1994,100000,"64C-WallsStreat");
		Employee1 Sam = new Employee1("Sam",2000,200000,"68D-WallsStreat");
		Employee1 John = new Employee1("John",1999,300000,"26B-WallsStreat");
		
		System.out.println("Name \t Year Of Joining \t Salary \t\t Address");
		
		robert.display();
		Sam.display();
		John.display();		
		
	}

}
